#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("creatingfile.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    fptr = fopen("creatingfile.txt", "r+");
    if (fptr == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    ch = fgetc(fptr);
    printf("First Character : %c\n", ch);
    fprintf(fptr, "Appending this Text");
    fclose(fptr);
    fptr = fopen("creatingfile.txt","r");
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}