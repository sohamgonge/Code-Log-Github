#include <iostream>
#include <vector>
#include "member.h"
#include "user.h"
using namespace std;

member::member() {}

member::member(string pname, string pcontactNumber, int pmemberId)
    : user(pname, pcontactNumber)
{
    memberId = pmemberId;
}

int member::get_memberId() const
{
    return memberId;
}

vector<string> member::get_borrowedBooks() const
{
    return borrowedBooks;
}

void member::set_memberId(int pmemberId)
{
    memberId = pmemberId;
}

void member::addBorrowedBook(string isbn)
{
    borrowedBooks.push_back(isbn);
}

void member::removeBorrowedBook(string isbn)
{
    int idx = -1;
    for (int i = 0; i < (int)borrowedBooks.size(); i++)
    {
        if (borrowedBooks[i] == isbn)
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        cout << "ISBN " << isbn << " not found in borrowed list." << endl;
        return;
    }

    borrowedBooks.erase(borrowedBooks.begin() + idx);
}

float member::calculateFine(int pdaysOverDue)
{
    return 2.0f * pdaysOverDue;
}