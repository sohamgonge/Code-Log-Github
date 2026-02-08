#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"
#include <iostream>

class Engineer : public Person
{
    using Person::Person; // Inheriting constructor
    friend std::ostream &operator<<(std::ostream &out, const Engineer &operand);

public:
        Engineer();
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param);
        Engineer(const Engineer &source); // copy constructors are not inheritable
    ~Engineer();
    void build_something()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723";
        // Compiler error
    }

private:
    int contract_count{0};
};

#endif // ENGINEER_H