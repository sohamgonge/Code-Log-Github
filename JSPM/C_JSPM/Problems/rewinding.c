#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=fopen("creatingfile.txt","r");
    char ch;
    ch = fgetc(fptr);
    printf("%c",ch);
    ch = fgetc(fptr);
    printf("%c",ch);
    rewind(fptr);
    ch = fgetc(fptr);
    printf("%c",ch);
    fclose(fptr);
    return 0;
}