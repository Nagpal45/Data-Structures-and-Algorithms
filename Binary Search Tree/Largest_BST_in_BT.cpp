//For each node store the following info:
//1. min in subtree
//2. max in subtree
//3. subtree size
//4. size of largest BST
//5. isBST
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

struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info largestBSTinBT(node* root){
    if(root == NULL){
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if(root->left == NULL && root->right == NULL){
        return {1,root->data, root->data, 1, true};
    }
    
    Info leftInfo = largestBSTinBT(root->left);
    Info rightInfo = largestBSTinBT(root->right);

    Info curr;
    curr.size = (1+ leftInfo.size + rightInfo.size);

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data){
        curr.min = min(leftInfo.min, min(rightInfo.min,root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max,root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }
    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main(){
    node* root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout<<"Largest BST in BT : "<<largestBSTinBT(root).ans<<endl;
}