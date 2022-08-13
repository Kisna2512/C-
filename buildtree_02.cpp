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
node* buildtree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inorder,start,end,curr);
    n->left=buildtree(preorder,inorder,start,pos-1);
    n->right=buildtree(preorder,inorder,pos+1,end);
    return n;
}
void display(node* root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);                     // 1, 2 ,4 ,3 ,5   //4,2,1,5,3
}
int main(){
    int x,y;
    cin>>x>>y;
    int preorder[x];
    int inorder[y];
    for (int i = 0; i <x; i++)
    {
        cin>>preorder[i];
    }
    
    for (int i = 0; i <y; i++)
    {
        cin>>inorder[i];
    }
    
    // display(root);
    node* root=buildtree(preorder,inorder,0,4);
    display(root);
    return 0;
}