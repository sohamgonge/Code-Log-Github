#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "user.h"
#include "member.h"
#include "admin.h"
#include "library.h"
#include "book.h"
using namespace std;

// ─────────────────────────────────────────────
//  HELPER — split a line by a delimiter
//  replaces sstream entirely
// ─────────────────────────────────────────────
vector<string> splitLine(const string &line, char delim)
{
    vector<string> fields;
    string current;
    for (char c : line)
    {
        if (c == delim)
        {
            fields.push_back(current);
            current = "";
        }
        else
        {
            current += c;
        }
    }
    fields.push_back(current); // last field
    return fields;
}

// ─────────────────────────────────────────────
//  BOOK MANAGEMENT
// ─────────────────────────────────────────────

void library::addBook(const book &b)
{
    Books.push_back(b);
    cout << "Book \"" << b.get_title() << "\" added successfully." << endl;
}

void library::removeBook(string isbn)
{
    int idx = -1;
    for (int i = 0; i < (int)Books.size(); i++)
    {
        if (Books[i].get_isbn() == isbn)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }

    cout << "Book \"" << Books[idx].get_title() << "\" removed successfully." << endl;
    Books.erase(Books.begin() + idx);
}

void library::updateBook(string isbn)
{
    for (int i = 0; i < (int)Books.size(); i++)
    {
        if (Books[i].get_isbn() == isbn)
        {
            string title, author, genre;
            int tcopies, acopies;

            cout << "Enter new title (current: " << Books[i].get_title() << "): ";
            cin.ignore();
            getline(cin, title);
            Books[i].set_title(title);

            cout << "Enter new author (current: " << Books[i].get_author() << "): ";
            getline(cin, author);
            Books[i].set_author(author);

            cout << "Enter new genre (current: " << Books[i].get_genre() << "): ";
            getline(cin, genre);
            Books[i].set_genre(genre);

            cout << "Enter total copies (current: " << Books[i].get_tcopies() << "): ";
            cin >> tcopies;
            Books[i].set_tcopies(tcopies);

            cout << "Enter available copies (current: " << Books[i].get_acopies() << "): ";
            cin >> acopies;
            Books[i].set_acopies(acopies);

            cout << "Book updated successfully." << endl;
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << endl;
}

void library::searchBook(string query)
{
    string lowerQuery = query;
    transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(),
              [](unsigned char c)
              { return tolower(c); });

    cout << "\n--- Search Results for \"" << query << "\" ---" << endl;
    bool found = false;
    for (auto &b : Books)
    {
        string lowerTitle = b.get_title();
        string lowerAuthor = b.get_author();
        transform(lowerTitle.begin(), lowerTitle.end(), lowerTitle.begin(),
                  [](unsigned char c)
                  { return tolower(c); }); // lamda function
        transform(lowerAuthor.begin(), lowerAuthor.end(), lowerAuthor.begin(),
                  [](unsigned char c)
                  { return tolower(c); });

        if (lowerTitle.find(lowerQuery) != string::npos ||
            lowerAuthor.find(lowerQuery) != string::npos)
        {
            cout << b << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No books found matching: " << query << endl;
}

void library::displayAllBooks()
{
    if (Books.empty())
    {
        cout << "No books in the library." << endl;
        return;
    }
    cout << "\n--- All Books ---" << endl;
    cout << "Title | Author | Genre | ISBN | Available/Total" << endl;
    cout << string(60, '-') << endl;
    for (auto &b : Books)
        cout << b << endl;
}

void library::displayAvailableBooks()
{
    cout << "\n--- Available Books ---" << endl;
    bool found = false;
    for (auto &b : Books)
        if (b.get_acopies() > 0)
        {
            cout << b << endl;
            found = true;
        }
    if (!found)
        cout << "No available books at the moment." << endl;
}

void library::displayBorrowedBooks()
{
    cout << "\n--- Currently Borrowed Books ---" << endl;
    bool found = false;
    for (auto &b : Books)
        if (b.get_acopies() < b.get_tcopies())
        {
            cout << b << endl;
            found = true;
        }
    if (!found)
        cout << "No books are currently borrowed." << endl;
}

void library::displayOverdueBooks()
{
    cout << "\n--- Overdue Books ---" << endl;
    ifstream fin("transaction.txt");
    if (!fin.is_open())
    {
        cout << "Could not open transaction file." << endl;
        return;
    }

    bool found = false;
    string line;
    // Format: memberId|isbn|issueDate|dueDate|returned(0/1)
    while (getline(fin, line))
    {
        if (line.empty())
            continue;
        vector<string> f = splitLine(line, '|');
        if (f.size() >= 5 && f[4] == "0")
        {
            cout << "Member ID: " << f[0] << " | ISBN: " << f[1]
                 << " | Due: " << f[3] << " (not returned)" << endl;
            found = true;
        }
    }
    fin.close();
    if (!found)
        cout << "No overdue books found." << endl;
}

void library::getMostBorrowedBooks()
{
    // reads transaction.txt and counts how many times each isbn appears
    ifstream fin("transaction.txt");
    if (!fin.is_open())
    {
        cout << "Could not open transaction file." << endl;
        return;
    }

    vector<string> isbnList;
    vector<int> countList;

    string line;
    while (getline(fin, line))
    {
        if (line.empty())
            continue;
        vector<string> f = splitLine(line, '|');
        if (f.size() < 2)
            continue;

        string isbn = f[1];
        bool found = false;
        for (int i = 0; i < (int)isbnList.size(); i++)
        {
            if (isbnList[i] == isbn)
            {
                countList[i]++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            isbnList.push_back(isbn);
            countList.push_back(1);
        }
    }
    fin.close();

    if (isbnList.empty())
    {
        cout << "No borrow history available." << endl;
        return;
    }

    // simple selection sort by count descending
    for (int i = 0; i < (int)isbnList.size() - 1; i++)
        for (int j = i + 1; j < (int)isbnList.size(); j++)
            if (countList[j] > countList[i])
            {
                swap(countList[i], countList[j]);
                swap(isbnList[i], isbnList[j]);
            }

    cout << "\n--- Most Borrowed Books ---" << endl;
    for (int i = 0; i < (int)isbnList.size(); i++)
    {
        string title = isbnList[i]; // fallback to isbn if book not found
        for (auto &b : Books)
            if (b.get_isbn() == isbnList[i])
            {
                title = b.get_title();
                break;
            }
        cout << title << " (ISBN: " << isbnList[i] << ") - borrowed "
             << countList[i] << " time(s)" << endl;
    }
}

// ─────────────────────────────────────────────
//  MEMBER MANAGEMENT
// ─────────────────────────────────────────────

void library::registerMember(member m)
{
    for (auto &existing : Members)
    {
        if (existing.get_memberId() == m.get_memberId())
        {
            cout << "Member ID " << m.get_memberId() << " already exists." << endl;
            return;
        }
    }
    Members.push_back(m);
    cout << "Member \"" << m.get_name() << "\" registered successfully." << endl;
}

void library::removeMember(int memberId)
{
    int idx = -1;
    for (int i = 0; i < (int)Members.size(); i++)
        if (Members[i].get_memberId() == memberId)
        {
            idx = i;
            break;
        }

    if (idx == -1)
    {
        cout << "Member ID " << memberId << " not found." << endl;
        return;
    }

    if (!Members[idx].get_borrowedBooks().empty())
    {
        cout << "Cannot remove member - they still have borrowed books." << endl;
        return;
    }
    cout << "Member \"" << Members[idx].get_name() << "\" removed." << endl;
    Members.erase(Members.begin() + idx);
}

bool library::authenticateMember(int memberId, string contact)
{
    for (auto &m : Members)
        if (m.get_memberId() == memberId && m.get_contactNumber() == contact)
            return true;
    return false;
}

// ─────────────────────────────────────────────
//  BORROW & RETURN
// ─────────────────────────────────────────────

void library::issueBook(int memberId, string isbn)
{
    member *m = nullptr;
    for (auto &mem : Members)
        if (mem.get_memberId() == memberId)
        {
            m = &mem;
            break;
        }
    if (!m)
    {
        cout << "Member ID " << memberId << " not found." << endl;
        return;
    }

    book *b = nullptr;
    for (auto &bk : Books)
        if (bk.get_isbn() == isbn)
        {
            b = &bk;
            break;
        }
    if (!b)
    {
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }

    if (b->get_acopies() <= 0)
    {
        cout << "No available copies of \"" << b->get_title() << "\"." << endl;
        return;
    }

    b->set_acopies(b->get_acopies() - 1);
    m->addBorrowedBook(isbn); // isbn stays as string — no stoi

    ofstream fout("transaction.txt", ios::app);
    if (fout.is_open())
    {
        fout << memberId << "|" << isbn << "|today|+14days|0\n";
        fout.close();
    }

    cout << "Book \"" << b->get_title() << "\" issued to \"" << m->get_name() << "\"." << endl;
}

void library::returnBook(int memberId, string isbn)
{
    member *m = nullptr;
    for (auto &mem : Members)
        if (mem.get_memberId() == memberId)
        {
            m = &mem;
            break;
        }
    if (!m)
    {
        cout << "Member ID " << memberId << " not found." << endl;
        return;
    }

    book *b = nullptr;
    for (auto &bk : Books)
        if (bk.get_isbn() == isbn)
        {
            b = &bk;
            break;
        }
    if (!b)
    {
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }

    m->removeBorrowedBook(isbn); // isbn stays as string — no stoi
    b->set_acopies(b->get_acopies() + 1);

    // mark transaction as returned (flip trailing 0 to 1)
    ifstream fin("transaction.txt");
    string allContent, line;
    string key = to_string(memberId) + "|" + isbn;
    while (getline(fin, line))
    {
        if (line.find(key) != string::npos && !line.empty() && line.back() == '0')
            line.back() = '1';
        allContent += line + "\n";
    }
    fin.close();

    ofstream fout("transaction.txt");
    fout << allContent;
    fout.close();

    cout << "Book \"" << b->get_title() << "\" returned by \"" << m->get_name() << "\"." << endl;
}

void library::payFine(int memberId)
{
    member *m = nullptr;
    for (auto &mem : Members)
        if (mem.get_memberId() == memberId)
        {
            m = &mem;
            break;
        }
    if (!m)
    {
        cout << "Member ID " << memberId << " not found." << endl;
        return;
    }

    int daysOverdue;
    cout << "Enter number of overdue days for \"" << m->get_name() << "\": ";
    cin >> daysOverdue;

    float fine = m->calculateFine(daysOverdue);
    cout << "Fine for " << daysOverdue << " overdue day(s): Rs." << fine << endl;
    cout << "Fine paid successfully." << endl;
}

// ─────────────────────────────────────────────
//  PERSISTENCE
// ─────────────────────────────────────────────

void library::saveBooksToFile()
{
    ofstream fout("book.txt");
    if (!fout.is_open())
    {
        cout << "book.txt." << endl;
        // cout << "Error opening data/book.txt." << endl;
        return;
    }

    fout << "title|author|genre|isbn|totalCopies|availableCopies\n";
    for (auto &b : Books)
        fout << b.get_title() << "|" << b.get_author() << "|"
             << b.get_genre() << "|" << b.get_isbn() << "|"
             << b.get_tcopies() << "|" << b.get_acopies() << "\n";
    fout.close();
    cout << "Books saved." << endl;
}

void library::loadBooksFromFile()
{
    ifstream fin("book.txt");
    if (!fin.is_open())
    {
        cout << "book.txt not found, starting with empty library." << endl;
        return;
    }

    Books.clear();
    string line;
    getline(fin, line); // skip header

    while (getline(fin, line))
    {
        if (line.empty())
            continue;
        vector<string> f = splitLine(line, '|');
        if (f.size() < 6)
            continue;
        Books.push_back(book(f[0], f[1], f[2], f[3], stoi(f[4]), stoi(f[5])));
    }
    fin.close();
    cout << "Books loaded: " << Books.size() << endl;
}

void library::saveMemberToFile()
{
    ofstream fout("members.txt");
    if (!fout.is_open())
    {
        cout << "members.txt." << endl;
        // cout << "Error opening data/members.txt." << endl;
        return;
    }

    fout << "name|contactNumber|memberId\n";
    for (auto &m : Members)
        fout << m.get_name() << "|" << m.get_contactNumber() << "|" << m.get_memberId() << "\n";
    fout.close();
    cout << "Members saved." << endl;
}

void library::loadMembersFromFile()
{
    ifstream fin("members.txt");
    if (!fin.is_open())
    {
        cout << "members.txt." << endl;
        // cout << "Error opening data/members.txt." << endl;
        return;
    }

    Members.clear();
    string line;
    getline(fin, line); // skip header

    while (getline(fin, line))
    {
        if (line.empty())
            continue;
        vector<string> f = splitLine(line, '|');
        if (f.size() < 3)
            continue;
        Members.push_back(member(f[0], f[1], stoi(f[2])));
    }
    fin.close();
    cout << "Members loaded: " << Members.size() << endl;
}