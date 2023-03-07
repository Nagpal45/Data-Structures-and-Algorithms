// Rahul and neha are playing a coin game. They are given n coins with values x1 to xn where n is always even.They take alternate turns.In each turn, a player picks either the first coin or the last coin from the roww and removes it from the row.The value of coin is recieve by that player.Determine the maximum value that Rahul can win if he moves first.Both the players play optimally.

#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int dp[100][100];

int solve(int i, int j){
    if(i==j){
        return a[i];
    }
    if(i>j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int l=a[i]+ min(solve(i+2,j),solve(i+1,i-1));
    int r = a[j]+ min(solve(i,j-2), solve(i+1,j-1));
    dp[i][j] = max(l,r);

    return dp[i][j];
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    a=vector<int>(n);
    for(auto &i: a){
        cin>>i;
    }
    cout<<solve(0,n-1);
    return 0;
}