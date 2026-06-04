#ifndef LIBRARY_H
#define LIBRARY_H

#include<iostream>
#include "book.h"
#include "member.h"
using namespace std;

class library
{
private:
    vector<book> Books;
    vector<member> Members;

public:
//    Books Management 
    void addBook(const book& b); // push_back onto books vector
    void removeBook(string isbn); // find by isbn, erase form vector
    void updateBook(string isbn); // find book, call setters on it
    void searchBook(string query); // search by title or aurthor, print matches
    void displayAllBooks(); // loop through books vectors, print each
    void displayAvailableBooks(); // loop, print only where availableCopies>0
    void displayBorrowedBooks(); // loop, print only where availableCopies < totalCopies
    void displayOverdueBooks(); // requires due date tracking 
    void getMostBorrowedBooks(); // sort or count borrow frequency


    // Member Management 
    void registerMember(member m);
    void removeMember(int memberId);
    bool authenticateMember(int memberId, string contact);

    // Borrow & Return 
    void issueBook(int memberId, string isbn); // find member + book, decrement availableCopies, call member..addBorrowedBook()
    void returnBook(int memberId, string isbn); // extend due date if no reservation
    void payFine(int memberId); // call member.calculateFine(), record payment

    // Persistence

    void saveBooksToFile(); // write books vector to data/books.txt
    void loadBooksFromFile(); // read data/books.txt, reconstruct books vector
    void saveMemberToFile(); // write member vector to data/members.txt
    void loadMembersFromFile(); // read data/members.txt, reconstruct members vector
};


#endif