#include <iostream>

int main()
{

    // Capture lists
    // double a{10};
    // double b{20};

    // // auto func = [](){
    // //     std::cout << "a + b : " << a + b << std::endl;
    // // }; a and b aren't in scope of the lambda function 
    // // func();

    // auto func = [a, b](){
    //     std::cout << "a + b : " << a + b << std::endl;
    // };
    // func();

    // Capturing by Value
    // int c{42};

    // auto func = [c](){
    //     std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
    // };

    // for(size_t i {}; i < 5 ; ++i){
    //     std::cout << "Outer value : " << c << " &outer : " << &c  << std::endl;
    //     func();
    //     std::cout << std::endl;
    //     ++c;

    // }



    // Capturing by Reference
    int c{42};

    auto func = [&c](){
        std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
    };

    for(size_t i {}; i < 5 ; ++i){
        std::cout << "Outer value : " << c << " &outer : " << &c  << std::endl;
        func();
        std::cout << std::endl;
        ++c;

    }
    return 0;
}