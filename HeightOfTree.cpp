#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (1 + max(height(root->left), height(root->right)));
    }
}
int main()
{
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(6);
    root->right->left = new Node(16);

    cout<<height(root);
}