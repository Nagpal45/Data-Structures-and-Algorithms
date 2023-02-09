//Print right to left and left to right alternatively on each level

//1. Use 2 stacks - currLevel and nextLevel
//2. variable leftToRight
//3. if LeftToRight, push left child then right
//4. else, push right child then left

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

void zigzagTraversal(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> currLevel;
    stack<node*> nextLevel;

    bool leftToRight = true;
    currLevel.push(root);
    while(!currLevel.empty()){
        node* temp = currLevel.top();
        currLevel.pop();

        if(temp){
            cout<<temp->data<<" ";
        }
        if(leftToRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        else{
            if(temp->right){
                nextLevel.push(temp->right);
            }
            if(temp->left){
                nextLevel.push(temp->left);
            }
        }
        if(currLevel.empty()){
            leftToRight = !leftToRight;
            swap(currLevel,nextLevel);
        }
    }
}

int main(){
    node* root = new node(12);
    root->left= new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);
    zigzagTraversal(root); 
    return 0;
}