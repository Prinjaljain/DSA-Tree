#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

int getMax(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->data, max(getMax(root->left),getMax(root->right)));
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);
    cout<<getMax(root);
}