#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high, int &comp);

void mergeSort(int arr[], int low, int high, int &comp) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid, comp);
        mergeSort(arr, mid + 1, high, comp);
        merge(arr, low, mid, high, comp);
    }
}

void merge(int arr[], int low, int mid, int high, int &comp) {
    int n = mid - low + 1;
    int m = high - mid;
    int A[n], B[m];

    for (int i = 0; i < n; i++)
        A[i] = arr[low + i];
    for (int j = 0; j < m; j++)
        B[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n && j < m) {
        comp++;
        if (A[i] <= B[j]) {
            arr[k++] = A[i++];
        } else {
            arr[k++] = B[j++];
        }
    }
    while (i < n) {
        arr[k++] = A[i++];
    }
    while (j < m) {
        arr[k++] = B[j++];
    }
}

int main() {
    int n;
    cout << "Enter Size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array Elements with space : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int comp = 0;
    mergeSort(arr, 0, n - 1, comp);
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNumber of Comparisons : " << comp << endl;
}
