#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=fopen("creatingfile.txt","a");
    fprintf(fptr,"\nIs this the second line");
    fclose(fptr);
    return 0;
}