#include <bits/stdc++.h>
using namespace std;
  
int getbit(int n,int pos){
    return((n &(1<<pos))!=0);
}
int setbit(int n,int pos){
    return(n | (1<<pos));
}

int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return n& mask;
}
int update(int n,int pos,int val){
     int mask=~(1<<pos);
    n=n& mask;
    return (n | (val<<pos));
}
int main(){
  cout<<getbit(5,2);
  cout<<endl;
  cout<<setbit(5,1);
  cout<<endl;
  cout<<clearbit(5,2);
  cout<<update(5,1,0);
return 0;

}