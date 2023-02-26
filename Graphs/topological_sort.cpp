// ordering of the nodes in a directed graph where ffor each directed edge from node A to node B, node A appears before node B in the ordering.
//Topological ordering are not unique.
//Not every graph has topological sort.
//Only DAG have a valid topologiccal sort.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int cnt =0;
    vector<vector<int>> adj_list(n);
    vector<int> indeg(n,0);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if(indeg[i] == 0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cnt++;
        int x= pq.front();
        pq.pop();
        cout<<x<<" ";
        for (auto it: adj_list[x])
        {
            indeg[it]--;
            if(indeg[it] == 0){
                pq.push(it);
            }
        }
        
    }

    return 0;
}