#include <stdio.h>
struct Student
{
    int roll;
    float marks;
};

int main()
{

    struct Student s1;
    s1.roll = 102;
    s1.marks = 91.5;

    printf("Roll = %d", s1.roll);
    printf("\nMarks = %.2f", s1.marks);

    return 0;
}