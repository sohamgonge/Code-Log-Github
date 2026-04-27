#include<iostream>
#include<cstring>
#include<user.h>
using namespace std;

    user::user()= default;
    user::user(string pname, int pcontactNumber){
        name = pname;
        contactNumber = pcontactNumber;
    }

    // setters
    string set_name();
    int set_contactNumber();
    
    // getters
    string get_name();
    int get_contactNumber();


