#include<iostream>
using namespace std;
class node{             //// this program is to count no of nodes in our tree
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



int sumnodes(node* root){


    if(root==NULL){
        return 0;
    }

    return sumnodes(root->left)+sumnodes(root->right)+1;
}






int main(){
    
    node* root=new node(1);
    root->right=new node(2);
    root->left=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
 
   cout<<sumnodes(root)<<endl;
return 0;

}