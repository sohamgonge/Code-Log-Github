#ifndef USER_H
#define USER_H

#include<iostream>
#include<cstring>
using namespace std; 

class user{
    protected : 
        string name;
        int contactNumber;

    public : 
    user::user();
    user::user(string pname, int pcontactNumber);
    // setters
    string set_name();
    int set_contactNumber();
    
    // getters
    string get_name();
    int get_contactNumber();

};

#endif