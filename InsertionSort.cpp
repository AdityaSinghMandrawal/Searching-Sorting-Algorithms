#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n,int &comp,int &swap){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            comp++;
            swap++;
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    int swap=0;
    InsertionSort(arr,n,comp,swap);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of Comparisons : "<<comp<<endl<<"Number of Swaps : "<<swap;
}