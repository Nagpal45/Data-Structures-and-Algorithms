//depth of tree's deepest node
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

int calcHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight,rHeight) + 1;
}

int calcDiameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight+rHeight+1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));

}

int optimizedCalcDiameter(node* root, int* height){
    if(root==NULL){
        return 0;
    }
    int lh =0, rh=0;
    int lDiameter = optimizedCalcDiameter(root->left, &lh);
    int rDiameter = optimizedCalcDiameter(root->right, &rh);

    int currDiameter = lh+rh+1;
    *height = max(lh,rh) + 1;

    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root)<<endl;

    int height = 0;
    cout<< optimizedCalcDiameter(root, &height)<<endl;
    return 0;
}