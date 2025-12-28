#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int temp;
    int sum_digi=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int i = 0; i<5; i++){
        temp = (n%10);
        printf("Temp : %d\n", temp);
        sum_digi+=temp;
        printf("Sum : %d\n",sum_digi);
        n = (n-temp)/10;
        printf("number : %d\n",n);
    }
    
    printf("%d",sum_digi);
    return 0;
}