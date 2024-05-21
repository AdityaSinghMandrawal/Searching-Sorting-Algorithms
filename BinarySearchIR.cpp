#include<iostream>
using namespace std;
int BinarySearch(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }  
    }
    return -1;
}
int countDuplicates(int arr[],int n,int key,int index){
    int count=1;
    for(int i=index-1;i>=0&&arr[i]==key;i--){
        count++;
    }
    for(int i=index+1;i<n&&arr[i]==key;i++){
        count++;
    }
    return count++;
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
        int index = BinarySearch(arr, 0, n - 1, key); 
        if (index != -1) { 
            int duplicates = countDuplicates(arr, n, key, index); 
            cout << key << " present  - No. of Duplicates " << duplicates << endl; 
        } else      cout << "Key not present" << endl; 
    } 
    return 0; 
}