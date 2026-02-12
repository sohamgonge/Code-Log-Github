#include <iostream>
#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include "pigeon.h"
#include "crow.h"

int main()
{
    // Animal polymorphism
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    Animal *animals[]{&dog1, &cat1, &pigeon1, &crow1};

    for (const auto &animal : animals)
    {
        animal->breathe();
    }

    std::cout << "-------------------------" << std::endl;

    // Feline polymorphism

    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");
    Pigeon pigeon2("white", "pigeon2");
    // Putting pigeon in felines will result in compiler error
    // pigeon is an animal, but is not a feline.
    Animal animal1("some animal");
    // Putting animal in felines will result in compiler error
    // feline is an animal, but the functions are only available to the derived classes of felines not the parent classes



    Feline *felines[]{&dog2, &cat2/*, &pigeon2, &animal1*/};

    for (const auto &feline : felines)
    {
        feline->run();
    }


    std::cout << "-------------------------" << std::endl;


    // Bird Polymorphism

    Pigeon pigeon3("white", "pigeon1");
    Crow crow3("black", "crow1");

    Bird *birds[]{&pigeon3, &crow3};

    for(const auto& bird : birds){
        bird->fly();
    }

    
    return 0;
}