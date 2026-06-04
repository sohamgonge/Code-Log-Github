#include <iostream>
#include <limits>
#include "library.h"
#include "book.h"
#include "member.h"
#include "admin.h"
using namespace std;

// ─────────────────────────────────────────────
//  HELPERS
// ─────────────────────────────────────────────

void clearScreen() { cout << "\033[2J\033[1;1H"; }

void pause()
{
    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void printHeader(const string &title)
{
    cout << "\n╔══════════════════════════════════╗\n";
    cout << "║  " << title;
    int pad = 32 - (int)title.size();
    for (int i = 0; i < pad; i++)
        cout << ' ';
    cout << "║\n";
    cout << "╚══════════════════════════════════╝\n";
}

// ─────────────────────────────────────────────
//  ADMIN MENUS
// ─────────────────────────────────────────────

void adminBookMenu(library &lib)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("BOOK MANAGEMENT [ADMIN]");
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Update Book\n";
        cout << "4. Search Book\n";
        cout << "5. Display All Books\n";
        cout << "6. Display Available Books\n";
        cout << "7. Display Borrowed Books\n";
        cout << "8. Display Overdue Books\n";
        cout << "9. Most Borrowed Books\n";
        cout << "0. Back\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string title, author, genre, isbn;
            int tc, ac;
            cin.ignore();
            cout << "Title: ";
            getline(cin, title);
            cout << "Author: ";
            getline(cin, author);
            cout << "Genre: ";
            getline(cin, genre);
            cout << "ISBN: ";
            getline(cin, isbn);
            cout << "Total copies: ";
            cin >> tc;
            cout << "Available copies: ";
            cin >> ac;
            lib.addBook(book(title, author, genre, isbn, tc, ac));
        }
        else if (choice == 2)
        {
            string isbn;
            cout << "ISBN: ";
            cin >> isbn;
            lib.removeBook(isbn);
        }
        else if (choice == 3)
        {
            string isbn;
            cout << "ISBN: ";
            cin >> isbn;
            lib.updateBook(isbn);
        }
        else if (choice == 4)
        {
            string q;
            cin.ignore();
            cout << "Search: ";
            getline(cin, q);
            lib.searchBook(q);
        }
        else if (choice == 5)
            lib.displayAllBooks();
        else if (choice == 6)
            lib.displayAvailableBooks();
        else if (choice == 7)
            lib.displayBorrowedBooks();
        else if (choice == 8)
            lib.displayOverdueBooks();
        else if (choice == 9)
            lib.getMostBorrowedBooks();

        if (choice != 0)
            pause();

    } while (choice != 0);
}

void adminMemberMenu(library &lib)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("MEMBER MANAGEMENT [ADMIN]");
        cout << "1. Register Member\n";
        cout << "2. Remove Member\n";
        cout << "0. Back\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name, contact;
            int id;
            cin.ignore();
            cout << "Name: ";
            getline(cin, name);
            cout << "Contact Number: ";
            getline(cin, contact);
            cout << "Member ID: ";
            cin >> id;
            lib.registerMember(member(name, contact, id));
        }
        else if (choice == 2)
        {
            int id;
            cout << "Member ID: ";
            cin >> id;
            lib.removeMember(id);
        }

        if (choice != 0)
            pause();

    } while (choice != 0);
}

void adminBorrowMenu(library &lib)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("BORROW & RETURN [ADMIN]");
        cout << "1. Issue Book to Member\n";
        cout << "2. Return Book from Member\n";
        cout << "3. Collect Fine\n";
        cout << "0. Back\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string isbn;
            cout << "Member ID: ";
            cin >> id;
            cout << "ISBN: ";
            cin >> isbn;
            lib.issueBook(id, isbn);
        }
        else if (choice == 2)
        {
            int id;
            string isbn;
            cout << "Member ID: ";
            cin >> id;
            cout << "ISBN: ";
            cin >> isbn;
            lib.returnBook(id, isbn);
        }
        else if (choice == 3)
        {
            int id;
            cout << "Member ID: ";
            cin >> id;
            lib.payFine(id);
        }

        if (choice != 0)
            pause();

    } while (choice != 0);
}

void adminDashboard(library &lib)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("ADMIN DASHBOARD");
        cout << "1. Book Management\n";
        cout << "2. Member Management\n";
        cout << "3. Borrow & Return\n";
        cout << "4. Save Data\n";
        cout << "0. Logout\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
            adminBookMenu(lib);
        else if (choice == 2)
            adminMemberMenu(lib);
        else if (choice == 3)
            adminBorrowMenu(lib);
        else if (choice == 4)
        {
            lib.saveBooksToFile();
            lib.saveMemberToFile();
            pause();
        }
        else if (choice == 0)
        {
            lib.saveBooksToFile();
            lib.saveMemberToFile();
            cout << "Data saved. Logged out.\n";
        }

    } while (choice != 0);
}

// ─────────────────────────────────────────────
//  MEMBER MENU
// ─────────────────────────────────────────────

void memberDashboard(library &lib, int memberId)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("MEMBER DASHBOARD");
        cout << "1. Search Book\n";
        cout << "2. View Available Books\n";
        cout << "3. Borrow a Book\n";
        cout << "4. Return a Book\n";
        cout << "5. Pay Fine\n";
        cout << "0. Logout\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string q;
            cin.ignore();
            cout << "Search (title/author): ";
            getline(cin, q);
            lib.searchBook(q);
        }
        else if (choice == 2)
            lib.displayAvailableBooks();
        else if (choice == 3)
        {
            string isbn;
            cout << "Enter ISBN of book to borrow: ";
            cin >> isbn;
            lib.issueBook(memberId, isbn);
        }
        else if (choice == 4)
        {
            string isbn;
            cout << "Enter ISBN of book to return: ";
            cin >> isbn;
            lib.returnBook(memberId, isbn);
        }
        else if (choice == 5)
            lib.payFine(memberId);
        else if (choice == 0)
            cout << "Logged out.\n";

        if (choice != 0)
            pause();

    } while (choice != 0);
}

// ─────────────────────────────────────────────
//  LOGIN
// ─────────────────────────────────────────────

// Hardcoded admins — you can extend this to load from file
admin admins[] = {
    admin("Super Admin", "0000000000", 1, "admin123"),
    admin("Librarian", "1111111111", 2, "lib456")};
int adminCount = 2;

void loginScreen(library &lib)
{
    int choice;
    do
    {
        clearScreen();
        printHeader("LIBRARY MANAGEMENT SYSTEM");
        cout << "1. Login as Admin\n";
        cout << "2. Login as Member\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        // ── ADMIN LOGIN ──
        if (choice == 1)
        {
            int adminId;
            string password;
            cout << "\nAdmin ID: ";
            cin >> adminId;
            cout << "Password: ";
            cin >> password;

            bool found = false;
            for (int i = 0; i < adminCount; i++)
            {
                if (admins[i].get_adminId() == adminId && admins[i].authenticate(password))
                {
                    cout << "\nWelcome, " << admins[i].get_name() << "!\n";
                    pause();
                    adminDashboard(lib);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "\nInvalid Admin ID or Password.\n";
                pause();
            }
        }

        // ── MEMBER LOGIN ──
        else if (choice == 2)
        {
            int memberId;
            string contact;
            cout << "\nMember ID: ";
            cin >> memberId;
            cout << "Contact Number: ";
            cin >> contact;

            bool found = lib.authenticateMember(memberId, contact);
            if (found)
            {
                cout << "\nWelcome!\n";
                pause();
                memberDashboard(lib, memberId);
            }
            else
            {
                cout << "\nInvalid Member ID or Contact Number.\n";
                pause();
            }
        }

        else if (choice == 0)
        {
            lib.saveBooksToFile();
            lib.saveMemberToFile();
            cout << "Goodbye!\n";
        }

    } while (choice != 0);
}

// ─────────────────────────────────────────────
//  MAIN
// ─────────────────────────────────────────────

int main()
{
    library lib;
    lib.loadBooksFromFile();
    lib.loadMembersFromFile();

    loginScreen(lib);
    return 0;
}