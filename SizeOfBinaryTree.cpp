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

// Recursive function to find size of a binary tree
int size(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + size(root->left) + size(root->right);
    }
}

// Iterative function to find size of a binary tree
// int size(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     queue<Node *> q;
//     q.push(root);
//     int count = 0;
//     while (q.empty() == false)
//     {
//         Node *curr = q.front();
//         q.pop();
//         count++;
//         if (curr->left != NULL)
//         {
//             q.push(root->left);
//         }
//         if (curr->right != NULL)
//         {
//             q.push(root->right);
//         }
//     }
//     return count;
// }

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
    size(root);
}