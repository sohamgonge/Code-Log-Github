#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &operand);

public:
    CivilEngineer();
    ~CivilEngineer();

private:
    std::string m_speciality{"None"};
};
#endif // CIVIL_ENGINNER_H