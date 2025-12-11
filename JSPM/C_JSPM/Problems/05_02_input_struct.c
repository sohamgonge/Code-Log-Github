#include<stdio.h>
struct student{
    int roll;
    float marks;
};
int main(){
    struct student s1;
    printf("Roll = ");
    scanf("%d",&s1.roll);
    printf("marks = ");
    scanf("%f",&s1.marks);
    
    printf("Marks = %f\n",s1.marks);
    printf("Roll = %d\n",s1.roll);

    return 0;
}