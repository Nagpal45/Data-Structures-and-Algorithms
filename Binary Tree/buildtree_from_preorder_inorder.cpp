//Pick element from preorder and create a node
//Increment preorder idx
//Search for picked element's pos in inorder
//Call to build left subtree from inorder's 0 to pos-1
//Call to build right subtree from inorder pos+1 to n
//Return the node 

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
    for (int i = 0; i <=end; i++)
    {
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

node* buildTree(int preorder[],int inorder[], int start, int end){
    static int idx =0;

    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* temp = new node(curr);

    if(start==end){
        return temp;
    }

    int pos = search(inorder, start, end, curr);
    temp->left = buildTree(preorder, inorder, start, pos-1);
    temp->right = buildTree(preorder, inorder, pos+1, end);

    return temp;
}

void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data;
    printInorder(root->right);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    node*root = buildTree(preorder,inorder,0,4);
    printInorder(root);
    return 0;
}