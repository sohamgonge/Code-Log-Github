#include<stdio.h>

int main(){
    int vol =0;
    char str[30];
    char * ptr=str;
    printf("Enter a String of maximum 30 characters : ");
    fgets(str,sizeof(str), stdin);
    while (*ptr!='\0')
    {
        if (*ptr == 'a' || *ptr == 'e'||*ptr == 'i'||*ptr == 'o'||*ptr == 'u'||
            *ptr == 'A' ||*ptr == 'E' || *ptr == 'I'||*ptr == 'O'||*ptr == 'U' )
        {
            vol++;
        }
        ptr++;
    }
    printf("Your string consists of %d vowels", vol);
    return 0;
}