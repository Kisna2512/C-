#include <iostream>

using namespace std;
#define n 5

class stack
{
    int* arr;
    int top;
public:
    stack()
    {
        arr= new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"NO SPACE IN STACK/stack overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=x;
        }

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is already empty"<<endl;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int isempty()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {

        } cout<<"stack is not empty"<<endl;

    }
    int isfull()
    {
        if(top==n-1)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            cout<<"stack is not full"<<endl;
        }
    }


};