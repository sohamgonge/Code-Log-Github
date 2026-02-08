#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Parent
{
public : 
    Parent() = default;
    Parent(int member_var) : m_member_var(member_var){

    }
    ~Parent() = default;

    void print_var()const{
        std::cout << "the value in parent is : " << m_member_var << std::endl;
    }

protected :
    int m_member_var{100};

};

#endif // PARENT_H