//Subgraph in which any two vertices are connected to each other by paths and which is connected to no additional vertices in the supergraph.

// visit the node by dfs
//if node is not visited, visit that node and its neighbour recursively.
//Each time a unvisited node is found, a new component will be found.

#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> components;
int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx] = true;
    int ans =1;
    for(auto i: adj[idx]){
        if(!vis[i]){
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0; i<n; i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    // for(auto i: components){
    //     cout<<i<<" ";
    // }
    


//Ques
//There are N friends numbered from 0 to N-1. You have to chose 2 person such that they are nt related to each other.
// You are given information in form of M pairs (X,Y), i.e, there is an link between friend X and Y.
// Find out the number of ways in which 2 persons from different groups can be chosen.



//Find the componenets and their sizes.
//At i'th component, choose one person from it and other person from the rest of the groups.

long long ans =0;
for(auto i: components){
    ans += i*(n-i);
}
cout<<ans/2;

return 0;
}