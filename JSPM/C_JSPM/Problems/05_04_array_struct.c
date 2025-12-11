#include<stdio.h>
struct student{
    int roll;
    float marks;
}stu;
int main(){
    struct student s[3];
    for (int i = 1; i < 4; i++)
    {
        printf("Enter %d's Roll Number : ", i);
        scanf("%d",&s[i].roll);
        printf("Enter %d's Marks Number : ", i);
        scanf("%f",&s[i].marks);
    }
    for (int i = 1; i < 4; i++)
    {
        printf("Enter %d's Roll Number : %d\n",i, s[i].roll);
        printf("Enter %d's Marks Number : %f \n",i, s[i].marks);
        /* code */
    }
    
    return 0;
}