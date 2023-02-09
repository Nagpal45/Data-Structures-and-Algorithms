//1. Node val
//2. Max path through left child + node val
//3. Max path through right child + node val
//4. Max path through left child + max path through right child + node val 

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

int maxPathSumUtil(node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left = maxPathSumUtil(root->left,ans);
    int right = maxPathSumUtil(root->right,ans);

    int nodeMax = max(max(root->data, root->data+left+right), max(root->data+left,root->data+right));

    ans = max(ans,nodeMax);
    int singlePathSum = max(root->data, max(root->data+left, root->data+right));

    return singlePathSum; 
}

int maxPathSum(node* root){
    int ans  = INT_MIN;
    maxPathSumUtil(root,ans);
     return ans;
}

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<maxPathSum(root);
    return 0;
}