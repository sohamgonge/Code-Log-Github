#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=fopen("creatingfile.txt","w");
    fprintf(fptr,"Writing onto this file\n");
    fclose(fptr);
    fptr=fopen("creatingfile.txt","w");
    fprintf(fptr,"This is meant to be a second line");//Only this will exist as opening a file in read mode deletes everything that existed previously
    fclose(fptr);
    return 0;
}