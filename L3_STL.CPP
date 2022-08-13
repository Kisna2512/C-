#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// we used here sorting algorithms
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
return 0;
int n;
cin>>n;
  vector<int>vec(n,0);
  for(int i=0;i<n;i++){
      cin>>vec[i];
  }

  sort(vec.begin(),vec.end());
     for(int i=0;i<n;i++){
      cout<<vec[i]<<" ";
  }
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
reverse(arr,arr+n);// we used here reverse algorithms
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}

 int n;
cin>>n;
  vector<int>vec(n,0);
  for(int i=0;i<n;i++){
      cin>>vec[i];
  }

  reverse(vec.begin(),vec.end());
     for(int i=0;i<n;i++){
      cout<<vec[i]<<" ";
  }
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// we used here sorting algorithms // maximum element algorithm
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
// cout<<endl;
// int el=*max_element(arr,arr+n);
int el=*min_element(arr,arr+n); /// for minimum element
cout<<"maximum lement: "<<el<<endl;



int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// here we using summ algorithm
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
cout<<endl;
int sum=accumulate(arr,arr+n,0);
cout<<"sum: "<<sum<<endl;

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// here we using summ algorithm
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
cout<<endl;
int x;
cin>>x;
  int ct=count(arr,arr+n,x); //// Here we using counting algorithm
  cout<<"count: "<<ct;

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// here we using summ algorithm
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
cout<<endl;
int x;
cin>>x;
 auto it=find(arr,arr+n,x);
 int ind=it-arr;
 cout<<"iterator: "<<ind;
  cout<<"count: "<<ct;

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);// here we using summ algorithm
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<< " ";
}
cout<<endl;
int x;
cin>>x;

bool r=binary_search(arr,arr+n,x);
cout<<r;








  return 0;

}