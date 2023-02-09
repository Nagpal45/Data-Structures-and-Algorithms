//1. Make middle element the root
//2. Recursively do the same for subtrees
//a. start to mid-1 for left subtree
//b. mid+ 1 to end for right subtree

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

node* sortedArraytoBST(int arr[], int start, int end){
    if(start > end){
        return NULL;
    }
    int mid = (start +end)/2;
    node* root = new node(arr[mid]);

    root->left = sortedArraytoBST(arr,start,mid-1);
    root->right = sortedArraytoBST(arr, mid+1,end);

    return root;
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int arr[] = {10,20,30,40,50};
    node* root = sortedArraytoBST(arr,0,4);
    preorder(root);
    cout<<endl;
    return 0;
}
