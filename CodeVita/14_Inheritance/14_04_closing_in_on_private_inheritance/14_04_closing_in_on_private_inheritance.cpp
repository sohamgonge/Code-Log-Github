#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
    Engineer eng1;
    CivilEngineer civileng1;
    std::cout << civileng1;

    std::cout << "Done" << std::endl;
    return 0;
}