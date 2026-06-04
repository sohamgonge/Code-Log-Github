#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<cstring>
#include"user.h"
using namespace std;

class admin: public user{
    private : 
    int adminId;
    string password;
    bool isAuthenticated = false;

    public : 
        // Constructors
        admin();
        admin(string pname, string pcontactNumber, int padminId, string ppassword);
        // getter
        int get_adminId();
        bool get_isAuthenticated();
        bool authenticate(string inputPassword);
};

#endif