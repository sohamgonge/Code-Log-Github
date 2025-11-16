#include <stdio.h>

int main()
{
    char str[34];
    printf("Enter Your Name : ");
    fgets(str, sizeof(str), stdin);
    // Initally gets was used but gets was dangerous since it took input up until user clicked entered, irrespective of its buffer size, therefore now we use fgets first tell which string we are reffereing to then we tell its size of its string then tell it that its a std input 
    // printf("Your name is : %s", str);
    puts(str);//automatically takes the cursor to the next line
    return 0;
}