#ifndef ADMIN_H
#define ADMIN_h

#include<iostream>
#include<cstring>
#include<user.h>
using namespace std;

class admin: protected user{
    protected : 
    int adminId;
    string password;
    bool authenciate = false;

    public : 
        // getter
        int get_adminId();
        string get_password();
        bool get_authenciate();

        // setter
        void set_adminId();
        void set_password();
        void set_authenciate();
};

#endif