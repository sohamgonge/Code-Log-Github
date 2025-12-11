#include<stdio.h>
struct book{
    char title[20];
    int pages;
    float prices;
}book;
int main(){
    struct book b1 = {"The One Thing", 188, 99};
    printf("\nAddress of name :%p ",&b1.title);
    printf("\nAddress of pages :%p ",&b1.pages);
    printf("\nAddress of prices :%p \n",&b1.prices);
    return 0;
}