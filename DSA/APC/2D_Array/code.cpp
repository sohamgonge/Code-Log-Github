#include <iostream>
#include <iomanip>
using namespace std;

pair<int, int> linearSearch(int arr[][3], int key, int row, int cols)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int maximum_row_sum(int arr[][3], int rows, int cols)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int diagsum(int arr[][3], int rows)
{
    int sum = 0;
    int k = rows - 1;
    for (int i = 0; i < rows; i++)
    {
        int j = i;
        sum += arr[i][j] + arr[i][k - i];
    }
    if(rows%2!=0){
        int mid = rows/2;
        sum -= arr[mid][mid];
    }
    return sum;
}
int diagonal_apna_sum(int arr[][3], int rows){
    int sum = 0;
    for(int i = 0; i< rows; i++){
        for(int j = 0; j< rows; j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j == (rows - i - 1)){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    pair<int, int> p = {0, 0};
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int matrix[4][3];
    int rows = 3;
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
    // p = linearSearch(matrix, 10, rows, cols);
    // if(p.first !=-1){
    //     cout << "Found at location : \n row : " << p.first << "\n col : " << p.second << endl;
    // }
    // else{
    //     cout << "Not found" << endl;
    // }
    // cout << "Maximum row sum : " << maximum_row_sum(matrix, rows, cols) << endl;
    cout << "Diagonal sum : " << diagsum(matrix, rows) << endl;
    cout << "Diagonal sum : " << diagonal_apna_sum(matrix, rows) << endl;
    return 0;
}