#include<stdio.h>

int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("soham.txt","w");
    fprintf(fptr,"Hello, World!");
    fclose(fptr);
    fptr = fopen("soham.txt","r");
    fseek(fptr,5,SEEK_SET);
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}