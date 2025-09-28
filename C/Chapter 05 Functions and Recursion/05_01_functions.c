#include <stdio.h>
void display(); // Function prtotype

int main()
{
    int a;
    printf("Initialiizing display function\n");
    display(); // function call
    printf("Displah function finished its work\n");
    return 0;
}

void display()
{
    printf("This is display\n"); // function defination
}