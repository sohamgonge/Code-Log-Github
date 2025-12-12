#include <stdio.h>

int main()
{
    FILE *qptr;
    qptr = fopen("questions.txt", "r");
    int counta = 0, ansa = 0, answered = 1, backslash = 1, totalback = 0, start = 1, i = 0, n = 0, r = 1;
    char c = fgetc(qptr);
    int qlist[] = {1, 5, 9, 13, 17};
    while (answered <= 5)
    {
        printf("%d\n",r);
        printf("Inside Big While\n");
        for (backslash = 0; backslash < 3;)
        {
            printf("Inside Big For\n");
            if (i == qlist[n])
            {
                if (c == '\n')
                {
                    printf("Inside small IF1\n");
                    backslash++;
                }
                printf("%c", c);
                answered++;
                printf("Inside Big IF 1\n");
            }
            c = fgetc(qptr);
            if (c == '\n')
            {
                totalback++;
                if (totalback % 3 == 0)
                {
                    printf("Inside small IF2\n");
                    i++;
                    n++;
                }

                printf("Inside Big IF 2\n");
            }
        }
        rewind(qptr);
        totalback = 0;
    }
    return 0;
}