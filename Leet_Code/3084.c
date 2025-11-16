#include<string.h>
long long countSubstrings(char* s, char c) {
    long long m = 0;
    long long counta = 0;
    int l = strlen(s);
    for(int i =0; i<l;i++){
        if(s[i]== c ){
            m++;
        }
    }
    counta = (m*(m+1))/2;
    return counta;
}