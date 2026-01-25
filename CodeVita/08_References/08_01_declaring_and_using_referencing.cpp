#include <iostream>

int main() {
    // Declaring and using references

    int int_data{45};
    double double_data{33.65};

    // Assign through initialization (reference must be initialized)
    int& reference_to_int_data_1{int_data};

    // Another reference to the same int
    int& reference_to_int_data_2 = int_data;

    // Reference to the double
    double& reference_to_double_data_1{double_data};

    // You have to declare and initialize in one statement
    // int& some_reference; // Error

    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "reference_to_int_data_1 : " << reference_to_int_data_1 << std::endl;
    std::cout << "reference_to_int_data_2 : " << reference_to_int_data_2 << std::endl;
    std::cout << "reference_to_double_data_1 : " << reference_to_double_data_1 << std::endl;

    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;
    std::cout << "&reference_to_int_data_1 : " << &reference_to_int_data_1 << std::endl;
    std::cout << "&reference_to_int_data_2 : " << &reference_to_int_data_2 << std::endl;
    std::cout << "&reference_to_double_data_1 : " << &reference_to_double_data_1 << std::endl;

    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
    std::cout << "sizeof(reference_to_int_data_1) : " << sizeof(reference_to_int_data_1) << std::endl;

    return 0;
}