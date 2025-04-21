#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][4], int row, int col){
    
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
 
}

int largestRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "The max sum of the rows is: " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[3][4];

    //taking input row wise
    for(int i=0; i<3; i++){
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    //calling the sum function
    rowSum(arr, 3, 4);
    cout << largestRowSum(arr, 3, 4);

    return 0;
}
