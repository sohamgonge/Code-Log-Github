#include <stdio.h>

int main()
{
    char st[32];
    char st2[32];
    int i = 0;
    char c;
    printf("Enter Your First String : ");
    // fgets(st, sizeof(st), stdin);
    scanf("%s", st);
    getchar();
    printf("Enter Your Second String : ");
    while (c != '\n')
    {
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0';
    printf("String 1 : %s\n", st);
    printf("String 2 : %s\n", st2);
    return 0;
}