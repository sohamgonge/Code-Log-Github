#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &operand)
{
    out << "CivilEngineer " << std::endl
        << "Full name : " << operand.get_full_name() << std::endl
        << "Age : " << operand.get_age() << std::endl
        << "Address : " << operand.get_address() << std::endl
        << "Contract_count : " << operand.get_contract_count() << std::endl
        << "Speciality : " << operand.m_speciality << std::endl;
    return out;
}
CivilEngineer::~CivilEngineer()
{
}