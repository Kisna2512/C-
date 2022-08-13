#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *top = NULL;

    Node()
    {
        Node *p = new Node();
        Node *top;
    }
    int isEmpty(Node *top)
    {
        if (top == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isFull(Node *top)
    {
        Node *p = new Node();
        if (p == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(int x)
    {
        if (isFull(top))
        {
            cout << "stack overflow!" << endl;
        }
        else
        {
            Node *p = new Node();
            p->data = x;
            p->next = top;
            top = p;
            cout << top;
            top++;
        }
    }
    int pop(Node *top)
    {
        if (isEmpty(top))
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            Node *p = top;
            top = (top)->next;
            int x = p->data;
            free(p);
            cout << "poped element is " << x;
        }
    }
};
Node *top = NULL;

int main()
{

    Node q;

    q.push(74);
    q.push(73);
    q.push(72);

    q.pop(top);
    return 0;
}