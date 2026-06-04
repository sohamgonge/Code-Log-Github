#include <iostream>
#include <cstring>
#include "admin.h"
#include "user.h"
using namespace std;

admin::admin()
{
}
admin::admin(string pname, string pcontactNumber, int padminId, string ppassword)
{
    name = pname;
    contactNumber = pcontactNumber;
    adminId = padminId;
    password = ppassword;
}
// getter
int admin::get_adminId()
{
    return adminId;
}
bool admin::get_isAuthenticated()
{
    return isAuthenticated;
}
bool admin::authenticate(string inputPassword)
{
    if (password == inputPassword)
    {
        isAuthenticated = true;
        return true;
    }
    else{
        return false;
    }
    
}