//Data is hierarichally(levels) stored
//Root(level 1) -> first node from which branches emerge
//Children -> nodes emerging from root( level 2)
//leaves -> children on last level


//Binary Tree 
//has atmost 2 children
//Maximum nodes at level L = 2^L
// Maximum nodes in tree of height h = 2^H -1
//Minimum possible height for n nodes = log(n+1)
// Binary tree with L leaves has atleast log(n+1) + 1 no. of levels

#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

struct node{
    int data;
    struct node* left;
    struct node*right;

    node(int val){
        data = val;
        left = NULL;
        right=NULL;
    }
};

void print2DUtil(node* root, int space)
{
    if (root == NULL)
        return;
 
    space += COUNT;
    print2DUtil(root->right, space);
 
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    print2DUtil(root->left, space);
}
 
void print2D(node* root)
{
    print2DUtil(root, 0);
}

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    print2D(root);
    return 0;
}