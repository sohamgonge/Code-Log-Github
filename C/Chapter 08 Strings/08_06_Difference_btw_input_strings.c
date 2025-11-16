#include<stdio.h>

int main(){
    char *ptr = "Soham Gonge";
    // char ptr[] = "Soham Gonge"; using this means we can't reassign this to any other string
    ptr = "Harry Bhai";
    printf("%s", ptr);
    return 0;
}