//Given binary tree
//1. Starting from root node
//2. Recursively call left and right with HD-1 and HD+1 as arguments.
//3. push the value into vector corresponding to the horizontal distance (HD)
//4. Output map

#include <bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node* left;
    node* right;
};

node* newNode(int key){
    node* Node = new node;
    Node ->key =key;
    Node->left = Node->right = NULL;
    return Node;
}

void getVerticalOrder(node* root, int hdis, map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }

    m[hdis].push_back(root->key);
    getVerticalOrder(root->left, hdis-1, m);
    getVerticalOrder(root->right, hdis+1, m);
}

int main(){
    node* root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);

    map<int,vector<int>> m;
    int hdis = 0;

    getVerticalOrder(root,hdis,m);

    map<int,vector<int>> :: iterator it;
    for ( it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < (it->second).size(); i++)
        {
            cout<<  (it->second)[i] <<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}