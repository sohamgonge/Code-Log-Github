#include <iostream>

int main()
{

    const size_t size{10};
    // size_t size{10};

    // Different ways you can declare an array
    // dynamically and how they are initialized

    double *p_salaries{new double[size]};           // salaries array will
                                                    // contain garbage values
    int *p_student{new (std::nothrow) int[size]{}}; // All values initialized to 0

    double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};
    // Allocating memory space for an array of size double vars.
    // First 5 will be initilaized with 1,2,3,4,5 and the rest will be 0's.

    // nullptr check and use the allocated array
    if (p_scores)
    {
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores." << std::endl;

        // Print out elements. Can use regular arrays access notation, or pointer arithmetic
        for (size_t i {}; i < size; ++i)
        {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_student;
    p_student = nullptr;

    delete [] p_scores;
    p_scores = nullptr;


    // Static arrays Vs Dynamic arrays
    std::cout << "=======================================" << std::endl;

    int scores[10] {1,2,3,4,5,6,7,8,9,10}; // Static array
    std::cout << "scores size : " << std::size(scores) << std::endl;
    for (auto s : scores)
    {
        std::cout << "value : " << s << std::endl;
    }
    
    int *p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10}; // Heap array
    // std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;
    // for (auto s : p_scores1)
    // {
    //     std::cout << "value : " << s << std::endl;
    // }
    return 0;
}