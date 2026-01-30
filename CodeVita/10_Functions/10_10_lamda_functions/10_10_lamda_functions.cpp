#include <iostream>

int main()
{

    /*
    Lamda function signature :
                                [capture list](parameters) -> return type{
                                        // Function body
                                };

    */

    // auto func = [](){
    //     std::cout << "Hello World!" << std::endl;
    // };
    // func();
    // func();

    // Declare a lamda function and call it directly
    // [](){
    //     std::cout << "Hello World!" << std::endl;
    // }();

    // Lambda functoin that take parameters
    // [](double a, double b)
    // {
    //     std::cout << "a + b : " << (a + b) << std::endl;
    // }(10.0, 5.0);

    // auto func1 = [](double a, double b){
    //     std::cout << "a + b : " << (a + b) << std::endl;
    // };

    // func1(10,20);
    // func1(5,7);

    // Lambda function that returns something
    // auto result = [](double a, double b){
    //     return a + b;
    // }(10,60);

    // // std::cout << "result : " << result << std::endl;
    // std::cout << "result : " << [](double a, double b){
    //     return a + b;
    // }(10, 50) << std::endl;

    // auto func2 = [](double a, double b){
    //     return a + b;
    // };

    // auto result1 = func2(23, 7);
    // auto result2 = func2(9, 45);
    // std::cout << "result1 : " << result1 << std::endl;
    // std::cout << "result2 : " << result2 << std::endl;
    // std::cout << "direct call : " << func2(5,2) << std::endl;

    // Explicitly specify the return type

    auto func3 = [](double a, double b) -> int {
        return a + b;
    };

    auto func4 = [](double a, double  b){
        return a + b;
    };

    double a{6.9};
    double b{3.5};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl;
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl;
    std::cout<< "Done!" << std::endl;
    return 0; 
}