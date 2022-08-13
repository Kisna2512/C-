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
int search(int inorder[],int start,int end,int curr){
    for (int i =start; i <=end; i++)
    {
        if(inorder[i]==curr){ 
            return i;
        }
    }
    return -1;
}
node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inorder,start,end,curr);
     n->right=buildtree(postorder,inorder,pos+1,end);
    n->left=buildtree(postorder,inorder,start,pos-1);
   
    return n;
}
void display(node* root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
    
     
}
int main(){
   
    int inorder[]={4,2,1,5,3};
     int postorder[]={4,2,5,3,1};
    // display(root);
    node* root=buildtree(postorder,inorder,0,4);
    display(root);
    return 0;
}