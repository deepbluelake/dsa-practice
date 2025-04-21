#include <iostream>
using namespace std;

// Merging the two sorted arrays
void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int i = s, j = mid + 1, k = 0;

    int newArr[e - s + 1];

    while (i < s + len1 && j < mid + 1 + len2) {
        if (arr[i] < arr[j]) {
            newArr[k++] = arr[i++];
        } else {
            newArr[k++] = arr[j++];
        }
    }

    while (i < s + len1) {
        newArr[k++] = arr[i++];
    }
    while (j < mid + 1 + len2) {
        newArr[k++] = arr[j++];
    }

    // Copy the merged array back to the original array
    for (int x = s, y = 0; x <= e; x++, y++) {
        arr[x] = newArr[y];
    }
}

// Recursive Merge Sort
void mergeSort(int arr[], int s, int e) {
    // Base Case
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[8] = {32, 56, 74, 12, 3, 4, 6, 90};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
