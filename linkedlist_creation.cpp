#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *create_linked_list(node *head)
{
    int data;
    cout << "Enter the data in linked list:- " << endl;
    cin >> data;
    node *p = new node();
    p->data = data;
    p->next = NULL;
    node *ptr;
    if (head == NULL)
    {
        head = p;
        ptr = head;
        return head;
    }
    else
    {
        ptr->next = p;
        ptr = p;
        return head;
    }
}

void system_out_println(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL";
}
int main()
{

    int n;
    cout << "Enter How many Nodes you want in linkedlist:- " << endl;
    cin >> n;
    node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        head = create_linked_list(head);
    }
    cout << "Your linked list is:- " << endl;

    system_out_println(head);

    return 0;
}