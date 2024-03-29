//How we will write the tree values

//Preorder
//Root -> Left subtree -> Right subtree
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
void preorder(struct node* root){
    if(root == NULL){
        return;
    }
    cout<<root -> data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root -> data;
    inorder(root->right);
}
void postorder(struct node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root -> data;
}

//Inorder
//Left subtree -> Root -> Right subtree

//Postorder
//Left subtree -> Right subtree -> Root

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;

}