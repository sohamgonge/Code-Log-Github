#include <iostream>
#include <member.h>
#include <user.h>
using namespace std;

member::member() = default;
member::member(string pname, int pcontactNumber, int pmemberId, int pborrowedBooks, int pnborrowedBooks = 0) : user(pname, pcontactNumber)
{
    memberId = pmemberId;
    if (pnborrowedBooks == 0)
    {
        pborrowedBooks{};
    }
    else
    {
        pborrowedBooks
    }
}

// Getters

int member::get_memberID()
{
}

int member::get_borrowedBooks(int i)
{
}

// Setters

void member::set_memberID()
{
}
