#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);

    return i+1;
    

}


void quick(int arr[],int n,int low,int high){
  
    if(low>=high){
        return;
    }
    int pi=partition(arr,low,high);
    quick(arr,n,low,p-1);
    quick(arr,n,p+1,high);
}







int main(){

int n=5;
int low=0;
int high=n-1;
int arr[n]={2,3 5,78,89};
quick(arr,n,0,5);
for(int k = 0; k < n; k++)
{
    cout<<arr[k]<<" ";
}





return 0;

}