#include <bits/stdc++.h>
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

node* search(node* root,int val){
    if(root==NULL){
      return NULL;
    }
    if(root->data==val){
       return root;
    }
    if(root->data>val){
       return search(root->left,val);
    }
    return search(root->right,val);
}

int main(){
node* root=new node(4);
    root->right=new node(6);
    root->left=new node(3);
    root->left->left=new node(1);
    root->left->right=new node(7);
    root->right->left=new node(5);
    root->right->right=new node(8);
    if(search(root,3)==NULL){
        cout<<"key doesn't exist"<<endl;
    }
    else {
        cout<<"key exist in your binary search tree"<<endl;
    }
return 0;

}