#include<stdio.h>

int main(){
    if(rename("data.txt","data1.txt")==0){
        printf("Renamed successfully\n");
    }
    else{
        perror("Error");
    }
    return 0;
}