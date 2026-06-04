#include <iostream>
#include "user.h"
using namespace std;

user::user() {}

user::user(string pname, string pcontactNumber)
{
    name = pname;
    contactNumber = pcontactNumber;
}

void user::set_name(string pname)
{
    name = pname;
}

void user::set_contactNumber(string pcontactNumber)
{
    contactNumber = pcontactNumber;
}

string user::get_name() const
{
    return name;
}

string user::get_contactNumber() const
{
    return contactNumber;
}