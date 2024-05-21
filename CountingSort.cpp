#include<iostream>
using namespace std;
int getRange(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void CountSort(int arr[],int n,int range){
    int count[range+1]={0};
    int output[n];
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=range;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
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
    int range=getRange(arr,n);
    CountSort(arr,n,range);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}