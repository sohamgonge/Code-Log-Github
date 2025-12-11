#include <stdio.h>
struct student
{
    int roll;
    char name[18];
    double marks;
    char branch[4];
};
int main()
{
    struct student s1 = {50, "Girish Chinchpure", 96.025, "CSBS"};
    printf("Name = %s\n", s1.name);
    printf("Roll number = %d\n", s1.roll);
    printf("Marks = %f\n", s1.marks);
    printf("Branch = %s\n", s1.branch);
    return 0;
}