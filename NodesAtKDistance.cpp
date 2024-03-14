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
void at_kth_dist(Node*root,int level){
    if(root==NULL){return;}
    if(level==0){
        cout<<root->key<<" ";
    }
    at_kth_dist(root->left,level-1);
    at_kth_dist(root->right,level-1);
} 
int main()
{
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(6);
    root->right->left = new Node(16);
    at_kth_dist(root,2);
}