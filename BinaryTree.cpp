#include <iostream>
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
void printTree(Node *root)
{
    //inorder traversal
    if (root != NULL)
    {
        printTree(root->left);
        cout << root->key << " ";
        printTree(root->right);
    }

    // preorder traversal
    // if (root != NULL)
    // {
    //     cout << root->key << " ";
    //     printTree(root->left);
    //     printTree(root->right);
    // }

    // postorder traversal
    // if (root != NULL)
    // {
    //     printTree(root->left);
    //     printTree(root->right);
    //     cout << root->key << " ";
    // }
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(6);
    printTree(root);
}