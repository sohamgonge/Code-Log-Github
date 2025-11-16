#include <stdio.h>
void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[50];
    fgets(c, sizeof(c), stdin);
    getchar();
    encrypt(c);
    printf("This is the Encrypted String : %s\n", c);
    decrypt(c);
    printf("This is the Decrypted String : %s\n", c);
    return 0;
}