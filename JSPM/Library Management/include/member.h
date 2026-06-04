#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <vector>
#include "user.h"
using namespace std;

class member : public user
{
private:
    int memberId;
    vector<string> borrowedBooks; // stores ISBNs as strings

public:
    member();
    member(string pname, string pcontactNumber, int pmemberId);

    // getters
    int get_memberId() const;
    vector<string> get_borrowedBooks() const;

    // setters
    void set_memberId(int pmemberId);
    void addBorrowedBook(string isbn);
    void removeBorrowedBook(string isbn);
    float calculateFine(int pdaysOverDue); // Rs.2 per day
};

#endif