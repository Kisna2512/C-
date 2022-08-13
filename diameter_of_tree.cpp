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


int caldia(node* root){
    int* height;

if(root==NULL){
  *height=0;
  return 0;
}


 int lh=0,rh=0;
 int lheight=caldia(root->left,&lh);
 int rheight=caldia(root->right,&rh);
 int curr=lh+rh+1;
 *height=max(lh,rh)+1;
 return max(curr,max(lheight,rheight));

}

int main(){

 node* root=new node(1);
    root->right=new node(2);
    root->left=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<caldia(root)<<endl;
  
return 0;

}