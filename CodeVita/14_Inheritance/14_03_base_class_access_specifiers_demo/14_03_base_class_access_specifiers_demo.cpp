#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main()
{
    Person person1("Daniel Gray", 27, "Blue sky St 233 #56");
    std::cout << "person1 : " << person1 << std::endl;

    std::cout << "--------------------" << std::endl;

    Player player;
    player.m_full_name = "Samuel Jackson";

    // player.m_age = 23;
    // Not accessible, can only be accessed  using member function as it is　protected in base case and inherited　by derived class as public

    // player.m_addrss = "Shubhshree Residential Ph - 2 ";
    // Compiler Error can't access becase it is private under Base class and inherited as public by Derived class

    std::cout << "--------------------" << std::endl;

    Nurse nurse1;
    // nurse1.m_full_name = "Davy Jones"; Compier error as inherited person as protected
    // nurse1.m_age = 51; // Compiler error
    // nurse1.m_address = "234-1313-134135"; // Compiler Error
    std::cout << "--------------------" << std::endl;

    Engineer engineer1;
    // engineer1.m_full_name = "Olivier Godson"; // Compiler Error
    // engineer1.m_age = 41;                // Compiler Error
    // engineer1.m_address = "897-78-723";
    // Compiler error

    std::cout << engineer1;

    return 0;
}