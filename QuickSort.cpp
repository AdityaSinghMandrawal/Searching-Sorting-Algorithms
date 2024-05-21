#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int low,int high,int &comp,int &swaps){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        comp++;
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
            swaps++;
        }
    }
    swap(arr[i+1],arr[high]);
    swaps++;
    return i+1;
}
void QuickSort(int arr[],int low,int high,int &comp,int& swaps){
    if(low<high){
        int loc=partition(arr,low,high,comp,swaps);
        QuickSort(arr,low,loc-1,comp,swaps);
        QuickSort(arr,loc+1,high,comp,swaps);
    }
}
int main(){
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements with space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int comp=0;
    int swaps=0;
    QuickSort(arr,0,n,comp,swaps);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of Comparisons : "<<comp<<endl<<"Number of Swaps : "<<swaps<<endl;
}