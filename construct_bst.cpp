#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *construct(int preorder[], int *preorderidx, int key, int min, int max, int n)
{
    if (*preorderidx >= n)
    {
        return NULL;
    }

    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderidx = *preorderidx + 1;

        if (*preorderidx < n)
        {
            root->left = construct(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        }
        if (*preorderidx < n)
        {
            root->right = construct(preorder, preorderidx, preorder[*preorderidx], key, max, n);
        }
    }
    return root;
}

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    print(root->left);
    print(root->right);
}

int main()
{

    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderidx = 0;
    node *root = construct(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);
    print(root);

    return 0;
}