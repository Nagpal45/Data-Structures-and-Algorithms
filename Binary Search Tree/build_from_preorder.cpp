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

node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){ 
    if(*preorderIdx >=n){
        return NULL;
    }
    node* root = NULL;
    if(key>min && key<max){
        root = new node(key);
        *preorderIdx = *preorderIdx + 1;

        if(*preorderIdx < n){
            root->left = constructBST(preorder,preorderIdx, preorder[*preorderIdx], min,key,n);
        }
        if(*preorderIdx<n){
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }
    return root;
}

void inorder(node* root){
    if(root == NULL){
        return; 
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int preorder[] ={10,2,1,13,11};
    int n = 5;
    int preorderIdx = 0;
    node* root = constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX, n);
    inorder(root);
}