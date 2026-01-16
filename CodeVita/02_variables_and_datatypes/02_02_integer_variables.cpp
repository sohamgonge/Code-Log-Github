#include <iostream>

int main()
{
    /***********Varible Braced Initalization*************/

    // Variable may contian random garbage value. WARNING
    int elephant_count; // some compilers may put 0

    int lion_count{}; // Initializes to zero

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    // Using a variable that hasn't been declared
    //  int new_number{doesnt_exist};

    // int narrowing_conversion {2.9}; Compiler Error
    // Some compilers might chop off decimal value and initialize it to 0 but c++20 doesn't allow this type of initalization

    std::cout << "Elephant Count : " << elephant_count << std::endl;
    std::cout << "Lion Count : " << lion_count << std::endl;
    std::cout << "Dog Count : " << dog_count << std::endl;
    std::cout << "Cat Count : " << cat_count << std::endl;
    std::cout << "Domesticated Animals : " << domesticated_animals << std::endl;

    std::cout << std::endl;

    /***********Functional Initalization*************/
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int  bad_initialization ( doesntexist3 + doesntexist4 );

    // Information lost. less safe than braced intialization;
    int narrowing_conversion_functional(2.9);

    std::cout << "Apple Count : " << apple_count << std::endl;
    std::cout << "Orange Count : " << orange_count << std::endl;
    std::cout << "Fruit Count : " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion Funcation : " << narrowing_conversion_functional << std::endl;

    /***********Assignment Notation*************/
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;


    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count : " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;

    std::cout << std::endl;

    //Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
    return 0;
}