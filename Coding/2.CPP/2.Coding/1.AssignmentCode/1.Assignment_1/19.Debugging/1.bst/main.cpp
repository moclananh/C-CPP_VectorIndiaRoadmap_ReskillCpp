#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int item)
    {
        key = item;
        left = NULL;
        right = NULL;
    }
};

// A utility function to insert a new node with
// the given key
// A utility function to insert a new node with
// the given key
Node *insert(Node *node, int key)
{

    // If the tree is empty, return a new node
    if (node == NULL)
        return new Node(key);

    // If the key is already present in the tree,
    // return the node
    if (node->key == key)
        return node;

    // Otherwise, recur down the tree/ If the key
    // to be inserted is greater than the node's key,
    // insert it in the right subtree
    if (node->key < key)
        node->right = insert(node->right, key);

    // If the key to be inserted is smaller than
    // the node's key,insert it in the left subtree
    else
        node->left = insert(node->left, key);

    // Return the (unchanged) node pointer
    return node;
}

// A utility function to do inorder tree traversal
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Driver program to test the above functions
int main()
{
    // Creating the following BST
    //      50
    //     /  \
    //    30   70
    //   / \   / \
    //  20 40 60 80

    Node *root = new Node(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print inorder traversal of the BST
    inorder(root);

    return 0;
}
