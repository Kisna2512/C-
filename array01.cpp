#include<iostream>


using namespace std;

int main(){


int n,sum=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    
}
int avg=sum/n;
cout<<avg;
    return 0;
}