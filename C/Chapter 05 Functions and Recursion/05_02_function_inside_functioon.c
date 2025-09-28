#include <stdio.h>
void goodMorning();
void goodEvening();
void goodNight();
int main()
{
    goodMorning();
    return 0;
}
void goodEvening()
{

    printf("Good Evening Harry\n");
    goodNight();
}
void goodMorning()
{

    printf("Good Morning Harry\n");
    goodEvening();
}
void goodNight()
{

    printf("Good Night Harry\n");
}