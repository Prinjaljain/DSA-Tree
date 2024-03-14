   if (root != NULL)
    {
        printTree(root->left);
        printTree(root->right);
        cout << root->key << " ";
    }