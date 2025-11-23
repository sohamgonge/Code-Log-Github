#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee soham = {100, 34.23, "Soham"};

    printf("\nCode is   :%d\n", soham.code);
    printf("Salary is :%f\n", soham.salary);
    printf("Name is   :%s\n", soham.name);

    return 0;
}