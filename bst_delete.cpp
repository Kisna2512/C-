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

node* inordersuccessor(node* root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}


node* deleteinbst(node* root,int val){
    if(val<root->data){
        root->left=deleteinbst(root->left,val);
    }
    else if(val>root->data){
        root->right=deleteinbst(root->right,val);
    }
    else{
        if(root->left==NULL){
             node*temp=root->right;
             free(root);
             return temp;
        }
        else if(root->right==NULL){
             node*temp=root->left;
             free(root);
             return temp;
        }
        node* temp=inordersuccessor(root->right);
        root->data=temp->data;
        root->right=deleteinbst(root->right,temp->data);
        return root;
    }
}


void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}











int main(){
node* root=new node(4);
    root->right=new node(5);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    // root->right->left=new node(5);
    root->right->right=new node(6);
 inorder(root);
 cout<<endl;
 deleteinbst(root,5);
 inorder(root);
return 0;

}