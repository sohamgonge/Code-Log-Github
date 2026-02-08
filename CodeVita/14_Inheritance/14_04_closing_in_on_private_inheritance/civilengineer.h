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
    }

private:
    std::string m_speciality{"None"};
};
#endif // CIVIL_ENGINNER_H