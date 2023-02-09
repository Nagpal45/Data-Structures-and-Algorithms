//1. Leaf Node -> Simply Delete
//2. Node has one child -> Replace node with child and delete.
//3. Node has two children -> Replace node with inorder successor and delete.
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

node* inorderSucc(node* root){
    node* curr = root;
    while(curr!=NULL && curr->left !=NULL){
        curr = curr->left;
    }
    return curr;
}

node* deleteBST(node* root, int key){
    if(key<root->data){
        root->left = deleteBST(root->left, key);
    }
    if(key>root->data){
        root->right = deleteBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            node* temp =root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
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
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node (5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    inorder(root);
    cout<<endl;
    root= deleteBST(root,5);
    inorder(root);
    cout<<endl;
    root= deleteBST(root,2);
    inorder(root);
    return 0;
} 