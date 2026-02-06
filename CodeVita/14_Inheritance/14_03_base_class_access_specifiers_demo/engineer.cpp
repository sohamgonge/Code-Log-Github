#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
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