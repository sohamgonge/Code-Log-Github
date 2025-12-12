#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    int backslash= 0 ;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);
        c = fgetc(ptr);
        if(c=='\n'){
            backslash++;
        }
    }
    printf("\n%d", backslash);
    return 0;
}