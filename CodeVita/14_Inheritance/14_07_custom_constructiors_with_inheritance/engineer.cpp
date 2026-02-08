#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called." << std::endl;
}
Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param)
: Person(fullname, age, address), contract_count(contract_count_param)
{
    std::cout << "Custom constructor for Engineer called." << std::endl;

}

std::ostream &operator<<(std::ostream &out, const Engineer &operand)
{
    out << "Engineer : " << std::endl
    << "Name : " << operand.get_full_name() << std::endl
    << "Age : " << operand.get_age() << std::endl
    << "Address : " << operand.get_address() << std::endl
    << "Contract_count : " << operand.contract_count << std::endl;
    return out;
}
Engineer::~Engineer()
{
}