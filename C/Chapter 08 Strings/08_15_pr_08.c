#include<stdio.h>
int occurences(char st[], char c){
    int count = 0;
    char *ptr = st;
    while(*ptr != '\0'){
        if(*ptr == c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "Sohamm";
    int count;
    occurences(st, 'm');
    count = occurences(st, 'm');
    printf("occurences : %d", count);
    return 0;
}