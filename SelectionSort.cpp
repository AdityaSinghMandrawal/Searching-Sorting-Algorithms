#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n,int &comp,int &swap){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            comp++;
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap++;
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
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
    SelectionSort(arr,n,comp,swap);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of Comparisons : "<<comp<<endl<<"Number of Swaps : "<<swap;
}
    