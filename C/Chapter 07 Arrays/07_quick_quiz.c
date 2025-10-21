#include<stdio.h>

void printarr(int parr[][], int n, int l){      
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("Enter the element of row %d and column %d is %d", i, j, parr[i][j]);
            
        }
        
    }
    
}
int main(){
    int dnum[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of row %d and column %d", i, j);
            scanf("%d", dnum[i][j]);
        }
        
    }
    
    return 0;
}