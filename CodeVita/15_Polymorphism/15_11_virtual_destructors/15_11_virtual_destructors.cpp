#include<iostream>
#include "dog.h"

int main()
{
    // Dog dog1;

    Animal *p_animal = new Dog;
    delete p_animal;
    return 0;
}