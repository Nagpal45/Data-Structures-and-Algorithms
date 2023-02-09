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

//case 1
void printSubtreeNodes(node* root, int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }

    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

//case 2
int printNodesAtK(node* root, node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl = printNodesAtK(root->left,target, k);
    if(dl!=-1){
        if(dl+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->right, k-dl-2);
        }
        return 1+dl;
    }
    int dr = printNodesAtK(root->right,target,k);
    if(dr!=-1){
        if(dr+1 == k){
            cout<<root->data<<" ";
        }
        else{
            printSubtreeNodes(root->left, k-dr-2);
        }
        return 1+dr;
    }
}

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    printNodesAtK(root, root->left, 1);
    return 0;
}