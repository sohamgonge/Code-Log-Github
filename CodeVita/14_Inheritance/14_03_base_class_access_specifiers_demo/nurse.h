#ifndef NURSE_H
#define NURSE_H

#include "person.h"

// Nurese will do protected inheritance
class Nurse : protected Person
{
    friend std::ostream& operator << (std::ostream& out, const Nurse& operand);
public : 
    Nurse();
    ~Nurse();

    void treat_unwell_person(){
        m_full_name = "John Snow"; // OK
        m_age = 23; // OK
        // m_address = "23432-21230-123"; Compiler Error 
    }

private :
    int practice_certificate_id{0};


};

#endif // NURSE_H