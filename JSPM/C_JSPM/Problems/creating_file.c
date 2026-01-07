#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("creatingfile.txt","w");
    if(fptr==NULL){
        printf("The file is not opened");
    }
    else{
        printf("The file is created successfully");
    }
    return 0;
}