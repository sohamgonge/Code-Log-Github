#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream& out, const CivilEngineer &operand);

public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road() {
        // get_full_name;
        // m_age = "45";
        // m_full_name = "Daniel Gray"; Compiler error : Inaccessible 
        add(10,2);
        add(10,2,4);
    }

    public:
    // using Person::do_something; Compiler Error
    using Engineer::do_something;
private:
    std::string m_speciality{"None"};
};
#endif // CIVIL_ENGINNER_H