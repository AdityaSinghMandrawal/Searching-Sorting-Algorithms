#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n,int &Comp,int &SwapC){
    bool flag;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            Comp++;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
                SwapC++;
            }
        }
        if(!flag)
            break;
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
    BubbleSort(arr,n,comp,swap);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of Comparisons : "<<comp<<endl<<"Number of Swaps : "<<swap;
}