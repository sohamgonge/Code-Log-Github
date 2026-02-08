#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor for Civil Engineer called." << std::endl;
}
CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count_param, std::string_view m_speciality_param)
: Engineer(fullname, age, address, contract_count_param), m_speciality(m_speciality_param)
{
    std::cout << "Custom constructor for Civil Engineer called." << std::endl;
    
}
CivilEngineer::CivilEngineer(const CivilEngineer &source)
    : Engineer(source), m_speciality(source.m_speciality)
{
    std::cout << "Custom Copy Constructor for Civil Engineer called." << std::endl;
}


std::ostream &operator<<(std::ostream &out, const CivilEngineer &operand)
{
    out << "CivilEngineer " << std::endl
        << "Full name : " << operand.get_full_name() << std::endl
        << "Age : " << operand.get_age() << std::endl
        << "Address : " << operand.get_address() << std::endl
        // << "Contract_count : " << operand.get_contract_count() << std::endl
        << "Speciality : " << operand.m_speciality << std::endl;
    return out;
}
CivilEngineer::~CivilEngineer()
{
}