#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void HeapSort(int arr[],int n){
    for(int i=(n/2)-1 ; i>=0 ;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1 ; i>0 ;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
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
    HeapSort(arr,n);
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
