#include<iostream>
using namespace std;
int deleteElement(int arr[], int n, int x)
{

int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;

if (i < n)
{
   
    n = n - 1;
    for (int j=i; j<n; j++){
        arr[j] = arr[j+1];
    }
}
 
return n;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
n = deleteElement(arr, n, x);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}