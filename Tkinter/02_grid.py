import tkinter as tk

root = tk.Tk()

myLabel1 = tk.Label(root, text = "Hello World!")#.grid(row= 0, column = 0)
myLabel2 = tk.Label(root, text = "My Name is Soham gonge")#.grid(row=1, column= 5)
# myLabel3 = tk.Label(root, text = "             ")

myLabel1.grid(row= 0, column = 0)
myLabel2.grid(row=1, column= 5)
# myLabel3.grid(row=1, column= 1)
#Everything is relative


root.mainloop()