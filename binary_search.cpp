#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int x;
  cin>>x;
  int s=0;
  int e=n-1;
  while(s<=e){
      int m=(s+e)/2;
      if(m==x){
          cout<<"found "<<x<<endl;
      }
      else if(m>x){
          e=m-1;
      }
      else if(m<x){
          s=m+1;
      }
  }
return 0;

}