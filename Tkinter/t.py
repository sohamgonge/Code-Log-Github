#!/usr/bin/env python3
"""
Focus Forest - simple Tkinter prototype
Features:
- Start / Pause / Reset timer (focus + optional break)
- Grow a "tree" on Canvas when focus session completes
- Persist sessions to sqlite3 (forest.db)
- Simple stats window
"""

import tkinter as tk
from tkinter import ttk, messagebox
import sqlite3
import time
from datetime import datetime

DB = "forest.db"

def init_db():
    conn = sqlite3.connect(DB)
    cur = conn.cursor()
    cur.execute("""
    CREATE TABLE IF NOT EXISTS sessions (
        id INTEGER PRIMARY KEY,
        start_ts TEXT,
        end_ts TEXT,
        minutes INTEGER,
        success INTEGER
    )
    """)
    conn.commit()
    conn.close()

class FocusForestApp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Focus Forest")
        self.geometry("520x420")
        self.resizable(False, False)

        self.is_running = False
        self.remaining = 25 * 60  # seconds
        self.focus_length_min = tk.IntVar(value=25)
        self.break_length_min = tk.IntVar(value=5)
        self.mode = "focus"  # or "break"
        self.start_time = None

        self._build_ui()
        init_db()
        self.load_trees_from_db()

    def _build_ui(self):
        frm = ttk.Frame(self, padding=10)
        frm.pack(fill="both", expand=True)

        # Controls
        ctrl = ttk.Frame(frm)
        ctrl.pack(fill="x", pady=(0,8))

        ttk.Label(ctrl, text="Focus (min):").grid(row=0, column=0, sticky="w")
        ttk.Spinbox(ctrl, from_=5, to=180, increment=5, textvariable=self.focus_length_min, width=6).grid(row=0, column=1, padx=4)

        ttk.Label(ctrl, text="Break (min):").grid(row=0, column=2, sticky="w", padx=(10,0))
        ttk.Spinbox(ctrl, from_=1, to=60, increment=1, textvariable=self.break_length_min, width=6).grid(row=0, column=3, padx=4)

        start_btn = ttk.Button(ctrl, text="Start", command=self.start)
        start_btn.grid(row=0, column=4, padx=(10,4))
        self.pause_btn = ttk.Button(ctrl, text="Pause", command=self.pause, state="disabled")
        self.pause_btn.grid(row=0, column=5, padx=4)
        ttk.Button(ctrl, text="Reset", command=self.reset).grid(row=0, column=6, padx=4)

        ttk.Button(ctrl, text="Stats", command=self.show_stats).grid(row=0, column=7, padx=(10,0))

        # Timer display
        self.timer_label = ttk.Label(frm, text=self._format_time(self.remaining), font=("Helvetica", 32))
        self.timer_label.pack(pady=(6,4))

        # Progressbar
        self.progress = ttk.Progressbar(frm, orient="horizontal", length=480, mode="determinate")
        self.progress.pack(pady=(0,10))

        # Canvas for forest
        self.canvas = tk.Canvas(frm, width=480, height=220, bg="#e8f5e9", highlightthickness=0)
        self.canvas.pack()
        self.canvas_trees = []  # store details for simple animation

        # Seed some instructions
        self.canvas.create_text(240, 110, text="Plant trees by completing focus sessions!", font=("Helvetica", 12), fill="#2e7d32", tags="hint")

    def load_trees_from_db(self):
        # Load number of successful sessions and render trees
        conn = sqlite3.connect(DB)
        cur = conn.cursor()
        cur.execute("SELECT COUNT(*) FROM sessions WHERE success=1")
        count = cur.fetchone()[0]
        conn.close()
        # remove hint
        self.canvas.delete("hint")
        for i in range(count):
            self._draw_tree_at(i)

    def start(self):
        if self.is_running:
            return
        if self.mode == "focus":
            total = self.focus_length_min.get() * 60
        else:
            total = self.break_length_min.get() * 60
        self.remaining = total
        self.total_seconds = total
        self.is_running = True
        self.start_time = time.time()
        self.pause_btn.config(state="normal")
        self._tick()

    def pause(self):
        if not self.is_running:
            return
        self.is_running = False
        self.pause_btn.config(state="disabled")

    def reset(self):
        self.is_running = False
        self.pause_btn.config(state="disabled")
        if self.mode == "focus":
            self.remaining = self.focus_length_min.get() * 60
        else:
            self.remaining = self.break_length_min.get() * 60
        self._update_ui()

    def _tick(self):
        if not self.is_running:
            return
        if self.remaining <= 0:
            self._session_complete()
            return
        self.remaining -= 1
        self._update_ui()
        self.after(1000, self._tick)

    def _update_ui(self):
        self.timer_label.config(text=self._format_time(self.remaining))
        if hasattr(self, "total_seconds") and self.total_seconds:
            pct = (self.total_seconds - self.remaining) / self.total_seconds * 100
            self.progress['value'] = pct
        else:
            self.progress['value'] = 0

    def _session_complete(self):
        self.is_running = False
        self.pause_btn.config(state="disabled")
        # Save to DB: success if focus mode and completed
        now = datetime.utcnow().isoformat()
        minutes = int((time.time() - self.start_time) / 60) if self.start_time else 0
        success = 1 if self.mode == "focus" else 0
        conn = sqlite3.connect(DB)
        cur = conn.cursor()
        cur.execute("INSERT INTO sessions (start_ts, end_ts, minutes, success) VALUES (?, ?, ?, ?)",
                    (datetime.utcfromtimestamp(self.start_time).isoformat() if self.start_time else now, now, minutes, success))
        conn.commit()
        conn.close()

        if self.mode == "focus":
            # grow a tree
            self._add_tree()
            messagebox.showinfo("Session complete", "Great job! Tree planted 🌱")
            # switch to break mode automatically (optional)
            self.mode = "break"
            self.remaining = self.break_length_min.get() * 60
        else:
            # break finished => back to focus
            messagebox.showinfo("Break complete", "Break finished — ready to focus again!")
            self.mode = "focus"
            self.remaining = self.focus_length_min.get() * 60

        self._update_ui()

    def _add_tree(self):
        # decide position based on current trees
        idx = len(self.canvas_trees)
        self._draw_tree_at(idx)

    def _draw_tree_at(self, idx):
        # layout: rows of 8 trees
        per_row = 8
        spacing_x = 480 // per_row
        x = (idx % per_row) * spacing_x + spacing_x // 2
        row = idx // per_row
        y_base = 200 - row * 45
        # trunk
        trunk = self.canvas.create_rectangle(x-6, y_base-20, x+6, y_base, fill="#6d4c41", outline="")
        # crown (circle)
        crown = self.canvas.create_oval(x-18, y_base-40, x+18, y_base-12, fill="#2e7d32", outline="")
        self.canvas_trees.append((trunk, crown))

    def show_stats(self):
        conn = sqlite3.connect(DB)
        cur = conn.cursor()
        cur.execute("SELECT COUNT(*), COALESCE(SUM(minutes),0) FROM sessions WHERE success=1")
        total_trees, total_minutes = cur.fetchone()
        cur.execute("SELECT COUNT(*) FROM sessions")
        total_sessions = cur.fetchone()[0]
        conn.close()

        s = tk.Toplevel(self)
        s.title("Stats")
        s.geometry("300x200")
        ttk.Label(s, text="Focus Forest - Stats", font=("Helvetica", 14)).pack(pady=8)
        ttk.Label(s, text=f"Trees planted: {total_trees}").pack(pady=4)
        ttk.Label(s, text=f"Total focused minutes: {total_minutes}").pack(pady=4)
        ttk.Label(s, text=f"Total sessions (all): {total_sessions}").pack(pady=4)

        # Recent sessions
        tree = ttk.Treeview(s, columns=("start", "end", "min", "ok"), show="headings", height=6)
        tree.pack(expand=True, fill="both", padx=8, pady=6)
        for col, head in [("start", "Start"), ("end", "End"), ("min", "Minutes"), ("ok", "Success")]:
            tree.heading(col, text=head)
            tree.column(col, width=60, anchor="center")

        conn = sqlite3.connect(DB)
        cur = conn.cursor()
        cur.execute("SELECT start_ts, end_ts, minutes, success FROM sessions ORDER BY id DESC LIMIT 10")
        rows = cur.fetchall()
        conn.close()
        for r in rows:
            st, et, mn, ok = r
            tree.insert("", "end", values=(st.split("T")[0] if st else "", et.split("T")[0] if et else "", mn, "Yes" if ok else "No"))

    @staticmethod
    def _format_time(sec):
        mm = sec // 60
        ss = sec % 60
        return f"{mm:02d}:{ss:02d}"

if __name__ == "__main__":
    app = FocusForestApp()
    app.mainloop()