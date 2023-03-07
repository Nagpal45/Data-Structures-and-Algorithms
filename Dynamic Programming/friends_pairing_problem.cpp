//Each one can remain single or can be paired up with someone .Each friend can be paired only once.Find total ways in which friends can remain single or pair up.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for (int i = 2; i <=n ; i++)
    {
        dp[i] = dp[i-1] + (i-1)*dp[i-2];
    }
    cout<<dp[n];
    
    return 0;
}