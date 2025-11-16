#include <stdio.h>
#include <string.h>
#include <math.h>

int numberOfSubstrings(char *s)
{
    int n = strlen(s);
    int counta = 0;

    // √n  
    int limit = (int)sqrt(n);

    for (int l = 0; l < n; l++)
    {
        int zeros = 0;
        int ones = 0;

        // create array for storing zero positions
        int zeroPos[400];     // enough because sqrt(1e5) ≈ 316
        int zeroCount = 0;

        // collect zero positions for this l
        for (int r = l; r < n; r++)
        {
            if (s[r] == '0')
            {
                zeroPos[zeroCount] = r;
                zeroCount++;

                // if we collected more than √n zeros → stop
                if (zeroCount > limit)
                    break;
            }
        }

        // print zero positions for this l (to understand Hint 3)
        printf("l = %d --> zero positions: ", l);
        for (int k = 0; k < zeroCount; k++)
            printf("%d ", zeroPos[k]);
        printf("\n");

        // (we will add k-loop here later...)
    }

    return counta;
}
int main(){
    char str[] = "101101";
    int counta;
    counta = numberOfSubstrings(str);
    printf("\n%d\n", counta);
    return 0;
}