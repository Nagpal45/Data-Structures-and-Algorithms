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
void sumReplacement(node* root){
    if(root==NULL){
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);
    if(root->left){
        root->data+=root->left->data;
    }
    if(root->right){
        root->data+=root->right->data;
    }
}

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    preOrder(root);
    cout<<endl;
    sumReplacement(root);
    cout<<endl;
    preOrder(root);
    return 0;
}