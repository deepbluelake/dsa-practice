#include <iostream>
using namespace std;

// Partition Function
int partition(int arr[], int s, int e) {
    int pivot = arr[s];  // Choose the first element as the pivot
    int i = s + 1;       // Initialize the index to one position right of the pivot
    int j = e;

    while (i <= j) {
        while (i <= e && arr[i] <= pivot) {
            i++;
        }

        while (j > s && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with arr[j]
    int temp = arr[s];
    arr[s] = arr[j];
    arr[j] = temp;

    return j; // Return the position of the pivot
}

void quickSort(int arr[], int s, int e) {
    if (s < e) {
        int pivotIndex = partition(arr, s, e);
        quickSort(arr, s, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, e);
    }
}

int main() {
    int arr[8] = {32, 54, 76, 378, 23, 5, 9, 12};
    int n = 8;
    quickSort(arr, 0, n - 1);

    // Printing the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
