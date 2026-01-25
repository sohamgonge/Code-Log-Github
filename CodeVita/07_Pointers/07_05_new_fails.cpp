#include <iostream>

int main()
{

    // int *data = new int[10000000000000000];// OR
    /*
    for(size_t i{0} ; i < 100000000 ; ++i){
        int *data = new int[100000000000];
    }
    */

    // Execption Mechanism
    // std::nothrow

    // Exception Mechanism :
    /*
    for (size_t i{0}; i < 100; ++i)
    {
        try
        {
            // what could potentially lead to crash
            int *data = new int[10000000000000];
        }
        catch (std::exception &ex)
        {
            // What to do when error is detected
            std::cout << " Something went wrong : " << ex.what() << std::endl;
        }
    }
    */

    // std::nothrow :
    for (size_t i{0}; i < 100; ++i)
    {

        int *data = new(std::nothrow) int[10000000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program ending well" << std::endl;

    return 0;
}