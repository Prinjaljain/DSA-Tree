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
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;
    s.push(root);
    while (s.empty() == false)
    {
        Node *curr = s.top();
        cout << curr->data << " ";
        s.pop();
        if (curr->right != NULL)
        {
            s.push(curr->right);
        }
        if (curr->left != NULL)
        {
            s.push(curr->left);
        }
    }
}

// Space optimized method
// void preorder(Node *root)
// {
//     if (root = NULL)
//     {
//         return;
//     }
//     stack<Node *> s;
//     Node *curr = root;
//     while (curr != NULL || s.empty() == false)
//     {
//         while (curr != NULL)
//         {
//             cout << curr->data << " ";
//             if (curr->right != NULL)
//             {
//                 s.push(curr->right);
//             }
//             curr = curr->left;
//         }
//         if (s.empty() == false)
//         {
//             curr = s.top();
//             s.pop();
//         }
//     }
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
    preorder(root);
}