#include "person.h"

Person::Person()
{
}
Person::Person(const std::string &first_name_param, const std::string &last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person[" << person.first_name << " " << person.last_name << "]";
    return out;
}
void Person::set_first_name(std::string_view first_name_param)
{
    first_name = first_name_param;
}
void Person::set_last_name(std::string_view last_name_param)
{
    last_name = last_name_param;
}
Person::~Person()
{
}