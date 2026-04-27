#ifndef MEMBER_H
#define MEMBER_H

#include<iostream>
#include<cstring>
#include<user.h>
using namespace std;

class member : protected user{
    private : 
        int memberId;
        vector<int> borrowedBooks;
        int nborrowedBooks;

    public:
    // constructor
    member();
    member(string pname, int pcontactNumber, int pmemberId, int borrowedBooks);
    
    // getters 
    int get_memberID();
    int get_borrowedBooks(int i);
    
    // setters 
    int set_memberID();
    int set_borrowedBooks(int i);
};

#endif
