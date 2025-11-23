#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and - if draw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    return 0;
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }

    printf("Enter s for snake, w for water and g for gun : ");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("\nYou chose %c and computer chose %c. ", you, comp);
    // printf("%d", result);
    if (result == 0)
    {
        printf("Game Draw!!!\n");
    }
    else if (result == 1)
    {
        printf("You Won!!!\n");
    }
    else if (result == 0)
    {
        printf("You Lose!!!\n");
    }

    return 0;
}