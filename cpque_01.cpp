#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,n;
	int key;
	cin>>n>>key;
	int arr[n];
   
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int low = 0,high=n-1,mid,ans=0;

    while(low<=high)
    {
        

        mid=low+(high-low)/2;

       
        if(arr[mid]<key)
        {

           low=mid+1;
        
        }

        else if(arr[mid]>key)
        {
            ans=arr[mid];
            high=mid-1;
        }
    }
   cout<<"printing next maximum number: "<<ans<<endl;

	return 0;
}