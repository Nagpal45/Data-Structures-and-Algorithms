#include <bits/stdc++.h>
using namespace std;

const int N=1e5+2, MOD= 1e9+7;
vector<int> adj[N];

int main(){

//Adjacency Matrix
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adjm(n+1, vector<int>(n+1,0));

    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;

        adjm[x][y] =1;
        adjm[y][x] =1;
    }
    cout<<"adjacency matrix of above graph is given by: "<<endl;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(adjm[3][7] ==1){
        cout<<"there is an edge between 3 and 7"<<endl;
    }
    else{
        cout<<"no edge"<<endl;
    }
    cout<<endl<<endl;



//Adjacency list
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"adjacency list of above grph is given by:";

    for (int i =1; i < n+1; i++)
    {
        cout<<i<<"->0";
        for (int x:  adj[i] )
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}