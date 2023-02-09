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

// int height(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lheight = height(root->left);
//     int rheight = height(root->right);
//     return max(lheight,rheight) + 1;
// }

// bool isBalanced(node* root){
//     if(root==NULL){
//         return true;
//     }
//     if(isBalanced(root->left) == false){
//         return false;
//     }
//     if(isBalanced(root->right) ==  false){
//         return false;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     if(abs(lh-rh) <= 1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


bool isBalanced(node* root, int* height){
    if(root==NULL){
        return true;
    }

    int lh =0;
    int rh=0;

    if(isBalanced(root->left, &lh) == false){
        return false;
    }
    if(isBalanced(root->right, &rh) ==false){
        return false;
    }
    *height = max(lh,rh) + 1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
    
}



int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->left = new node(6);
    int height =0;
    if(isBalanced(root, &height)){
        cout<<"Balanced";
    }
    else{
        cout<<"Unbalanced";
    }
    return 0;
}