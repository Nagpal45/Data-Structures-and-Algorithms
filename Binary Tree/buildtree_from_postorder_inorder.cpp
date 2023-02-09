//Start from end of ppostorder & pick an element to create a node
//Decrement postorder idx
// Search for picked element's pos in inorder
//Call to build right subtree from inorder pos+1 to n
//Call to build left subtree from inorder 0 to pos-1
// Return the node

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

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

int search(int inorder[], int start, int end, int curr){
    for (int i = start; i <=end; i++)
    {
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

node* buildTree(int postorder[],int inorder[], int start, int end){
    static int idx = 4;

    if(start>end){
        return NULL;
    }

    int curr = postorder[idx];
    idx--;
    node* temp = new node(curr);

    if(start==end){
        return temp;
    }

    int pos = search(inorder, start, end, curr);
    temp->right = buildTree(postorder, inorder, pos+1, end);
    temp->left = buildTree(postorder, inorder, start, pos-1);

    return temp;
}

void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    node*root = buildTree(postorder,inorder,0,4);
    printInorder(root);
    return 0;
}