#include<iostream>
using namespace std;
class node{
  public:
  int data;
   node* left;
  node* right;
  node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }
};
int main(){
    node* root=new node(1);
    root->right=new node(2);
    root->left=new node(3);
    root->left->left=new node(4);
return 0;

}