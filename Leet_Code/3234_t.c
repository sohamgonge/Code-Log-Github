#include <stdio.h>
#include <string.h>
int numberOfSubstrings(char *s)
{
    int counta = 0, zeros = 0, ones = 0;
    int i = 0, j = 0;
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        for (j = i;  j<l; j++)
        {
            if (s[j] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
            if(ones>=(zeros*zeros)){
                counta++;
            }
        }
        ones = zeros = 0;
    }
    return counta;
}
int main()
{
    char str[] = "101101";
    int counta;
    counta = numberOfSubstrings(str);
    printf("\n%d\n", counta);
    return 0;
}