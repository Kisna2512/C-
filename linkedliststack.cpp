#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

  
};
Node* top = NULL;
int isEmpty( Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull( Node* top){
    Node* p= new Node();
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
  void push( Node* top, int x){
    if(isFull(top)){
        cout<<"stack overflow!"<<endl;
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        cout<<top;
    }
}
int pop( Node* tp){
    if(isEmpty(tp)){
        cout<<"stack underflow"<<endl;
    }
    else{
         Node* n = top;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
int main(){
    top =push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    
    // linkedListTraversal(top);
 
    int element = pop(top); 
    cout<<"popped element is"<<element;
    // linkedListTraversal(top);
    return 0;
}