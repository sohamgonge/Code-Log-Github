#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class user
{
protected:
    string name;
    string contactNumber;

public:
    user();
    user(string pname, string pcontactNumber);

    void set_name(string pname);
    void set_contactNumber(string pcontactNumber);

    string get_name() const;
    string get_contactNumber() const;
};

#endif