#include<stdio.h>

int main(){
    char name[200];
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);
    printf("This is my name %s",name);
    return 0;
}