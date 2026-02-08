#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &operand);

public:
    CivilEngineer();
    CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count_param, std::string_view m_speciality_param);
    CivilEngineer(const CivilEngineer &source);
    ~CivilEngineer();

private:
    std::string m_speciality{"None"};
};
#endif // CIVIL_ENGINNER_H