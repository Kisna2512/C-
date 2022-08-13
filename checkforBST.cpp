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

bool isbst(node* root,node* min=NULL,node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){
     return false;
    }
    if(max!=NULL && root->data >= max->data){
     return false;
    }

    bool leftvalid=isbst(root->left,min,root);
    bool rightvalid=isbst(root->right,root,max);
    return leftvalid and rightvalid;
}

int main(){
node* root1=new node(4);
    root1->right=new node(5);
    root1->left=new node(2);
    root1->left->left=new node(1);  //1
    root1->left->right=new node(3);
    // root->right->left=new node(5);
    root1->right->right=new node(6);

    if(isbst(root1,NULL,NULL)){
    cout<<"valid,BST"<<endl;
    }
    else{
        cout<<"Invalid,BST"<<endl;
    }
   
    return 0;


}