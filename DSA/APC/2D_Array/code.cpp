#include <iostream>
#include<iomanip>
using namespace std;

bool linearSearch(int arr[][3], int key, int row, int cols){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    pair<int, int> p ={0,0};
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // int matrix[4][3];
    int rows = 4;
    int cols = 3;
    
    // cout << matrix[2][1] << endl;
    // input
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols ; j++){
    //         cin >> matrix[i][j];
    //     }
    // }

    // Output
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << setw(2) << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if(linearSearch(matrix, 13, rows, cols)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}