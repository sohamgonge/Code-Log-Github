#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <iostream>

class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723";
        // Compiler error
    }

public:
    using Person::add; // ressurect all the overloads

protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;
    // using Person::m_address;// we can't resurect things that are private in base class
    using Person::do_something;

    int get_contract_count() const
    {
        return contract_count;
    }

private:
    int contract_count{0};
};

#endif // ENGINEER_H