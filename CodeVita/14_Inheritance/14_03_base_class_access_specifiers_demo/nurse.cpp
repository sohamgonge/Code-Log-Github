#include "person.h"
#include "nurse.h"
#include <iostream>

Nurse::Nurse()
{
}
Nurse::~Nurse()
{
}

std::ostream &operator<<(std::ostream &out, const Nurse &operand)
{
    out << "Nurse [Full name : " << operand.get_full_name() << std::endl
        << "Age : " << operand.get_age() << std::endl
        << "Address : " << operand.get_address() << std::endl
        << "Practice Certificate ID : " << operand.practice_certificate_id << std::endl;
    return out;
}