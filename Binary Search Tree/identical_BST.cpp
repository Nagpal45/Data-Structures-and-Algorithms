//For given root nodes of 2 BST, print if the BSTs are identical or not.Identical BSTs are structurally identical and have equal values for the nodes int the structure.

//1. If both empty, return true
//2. if both non-empty,
//a. Check that data at nodes is equal
//b. check if left subtrees are same
//c. check if right subtrees are same
//3. if (a,b,c) all are true, return true else false

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

bool isIdentical(node* root1, node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    else if(root1 == NULL || root2 == NULL){
        return false;
    }
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }   
        return false;
    }
}

int main(){
    node* root1 = new node(2);
    root1->left = new node(1); 
    root1->right = new node(3); 
    node* root2 = new node(6);
    root2->left = new node(3);
    root2->right = new node(10);

    if(isIdentical(root1,root2)){
        cout<<"Identical";
    } 
    else{
        cout<<"Not identical";
    }

    return 0;
}