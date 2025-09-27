#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    int max, min, guess, nguess = 1;
    char again = 'Y';
    max = 100;
    min = 0;
    // number = rand();
    number = (rand() % (max - min + 1)) + min;
    // printf("The number is %d\n", number);
    printf("\n*************************************************\n");
    printf("   WELCOME TO THE GUESS THE NUMBER GAME! \n");
    printf("*************************************************\n\n");
    printf("=>I have chosen a number between %d and %d.\n\n", min, max);
    printf("Can you guess it? Enter a number: ");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter lower Number Please: ");
        }
        else if (guess < number)
        {
            printf("Enter Higher Number Please: ");
        }
        else if (guess == number)
        {
            printf("\n*************************************************\n");
            printf("    CONGRATULATIONS! \n");
            printf("   You found the number in %d guesses!\n", nguess);
            printf("*************************************************\n\n");
            again = 'N';
            printf("Do you want to play again (Y/N)\n");
            scanf(" %c", &again);
            if (again == 'y' || again == 'Y')
            {
                printf("\nGreat! Let's play again...\n");
                printf("👉 Guess the number between %d and %d\n\n", min, max);
                number = (rand() % (max - min + 1)) + min;
                nguess = 1; // reset guess counter for new game
            }
        }
        else
        {
            printf("Enter a valid input\n");
        }
        nguess++;
    } while (again == 'y' || again == 'Y');

    return 0;
}