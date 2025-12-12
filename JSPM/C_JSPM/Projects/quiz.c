#include <stdio.h>

int main()
{
    FILE *qptr;
    qptr = fopen("questions.txt", "r");
    int counta = 0, ansa = 0, answered = 1, backslash = 1, totalback=0, start = 1,i = 0,n=0;
    char c = fgetc(qptr);
    int qlist[]={1,5,9,13,17};
    while (answered <= 5)
    {
        for (backslash = 0; backslash < 3;)
        {
            if (i==qlist[n])
            {
                if (c == '\n')
                {
                    backslash++;
                }
                printf("%c", c);
                answered++;
            }
            c = fgetc(qptr);
            if (c=='\n')
            {
                totalback++;
                if (totalback%3==0)
                {
                    i++;
                    n++;
                }
                
            }
            
        }
        rewind();
        totalback=0;
    }
    return 0;
}