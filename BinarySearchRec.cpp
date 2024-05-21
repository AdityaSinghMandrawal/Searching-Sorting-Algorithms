#include <iostream> 
using namespace std; 
int binSearch(int arr[], int low, int high, int target){ 
    if (low > high) 
        return -1; 
    int mid = low + (high - low) / 2; 
    if (arr[mid] == target) 
        return mid; 
    else if (arr[mid] < target)      
        return binSearch(arr, mid + 1, high, target); 
    else       
        return binSearch(arr, low, mid - 1, target); 
} 
int countDuplicates(int arr[], int n, int key, int index){ 
    int count = 1; 
    for (int i = index - 1 ; i >= 0 && arr[i] == key; i--) 
        count++; 
    for (int i = index + 1; i < n && arr[i] == key; i++) 
        count++; 
    return count; 
}
int main() { 
    int T; 
    cout << "Enter the number of test cases: "; 
    cin >> T; 
    while (T--) { 
        int n; 
        cout << "Enter the size of the array: "; 
        cin >> n; 
        int arr[n]; 
        cout << "Enter " << n << " elements of the array in sorted order: "; 
        for (int i = 0; i < n; ++i) 
            cin >> arr[i]; 
        int key; 
        cout << "Enter the key element to search: "; 
        cin >> key; 
        int index = binSearch(arr, 0, n - 1, key); 
        if (index != -1) { 
            int duplicates = countDuplicates(arr, n, key, index); 
            cout << key << " present  - No. of Duplicates " << duplicates << endl; 
        } else      cout << "Key not present" << endl; 
    } 
    return 0; 
}
