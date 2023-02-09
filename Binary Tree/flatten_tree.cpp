// Flatten binary tree in linked list such that left of each node should point to NULL and right should contain next node in preorder sequence.

// 1. Recursively flatten left and right subtrees.
// 2. Store the left tail nd right tail.
// 3. Store right subtree in temp and make the left subtree as right subtree
// 4. Join right subtree with left tail.
// 5. Return right tail.

#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(node *root)
{
    if(root==NULL || (root->left == NULL && root->right == NULL)){
        return;
    }
    if (root->left)
    {
        flatten(root->left);

        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    flatten(root);
    inOrder(root);
    return 0;
}