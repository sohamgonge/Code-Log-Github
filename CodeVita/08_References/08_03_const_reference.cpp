#include<iostream>

int main(){
    
    /*
    //  Non const reference 
    std::cout << std::endl;
    std::cout << "Non const reference : " << std::endl;
    int age {27};
    int& ref_age{age};

    std::cout << "age : " << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    
    // Can modify original variable through reference 

    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++; // Modify through reference

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    */

   int age {27};
   /*
   // const reference 
   std::cout << std::endl;
   std::cout << "Non const reference : " << std::endl;
   const int& ref_age{age};
   
   std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    
    // Can modify original variable through reference 

    std::cout << std::endl;
    std::cout << "Can't modify origianl variable through reference but can be changed through orignal variable" << std::endl;

    age++;
    // ref_age++; // Compiler error

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;
    */


    // Simulating reference behavior with pointers
    const int * const p_age {&age};

    // *p_age = 45;// Compiler Error

    

    return 0;
}