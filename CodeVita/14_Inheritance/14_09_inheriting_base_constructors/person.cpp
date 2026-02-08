#include "person.h"
#include <iostream>

Person::Person()
{
    std::cout << "Default constructor for Person called." << std::endl;
}
Person::Person(std::string_view fullname, int age, std::string_view address) : m_full_name{fullname}, m_age{age}, m_address{address}
{
    std::cout << "Custom constructor for Person called." << std::endl;
}
Person::Person(const Person &source)
    : m_full_name(source.m_full_name), m_age(source.m_age), m_address(source.m_address)
{
    std::cout << "Custom Copy Constructor for Person called..." << std::endl;

}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person : " << std::endl
        << "Full name : " << person.get_full_name() << std::endl
        << "Age : " << person.get_age() << std::endl
        << "Address : " << person.get_address() << "]";

    return out;
}

Person::~Person()
{
}
