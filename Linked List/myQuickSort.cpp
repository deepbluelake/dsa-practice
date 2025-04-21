#include <iostream>
using namespace std;

//Partition Function
int partition(int arr[], int s, int e){
    int x = arr[0], count_less_thanX = 0;

    //Number of elements lesser than X
    for (int i = 0; i < e-s+1; i++)
    {
        if(arr[i] < x){
            count_less_thanX++;
        }
    }

    //Swap of X, X goes to s+count_less_thanX
    int temp; 
    int c = s+count_less_thanX;
    arr[c] = temp;
    arr[c] = arr[0];
    arr[0] = temp;
    
    int i = s, j = e;
    while(arr[i] != arr[c] && arr[j] != arr[c]){
    if(arr[i]<=x){
        i++;
    }
    else if(arr[j]>=x){
        j--;
    }
    else{
        int holder;
        arr[i] = holder;
        arr[i] = arr[j];
        arr[j] = holder;
    }
    }
    return c;

}
void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    int c = partition(arr, s, e);
    quickSort(arr, s, c-1);
    quickSort(arr, c+1, e);

}

int main(){
    int arr[8] = {32,54,76,378,23,5,9,12};
    int n = 8;
    quickSort(arr, 0, n-1);

    //Printing the sortedArray
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}