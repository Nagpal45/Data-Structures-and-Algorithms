//Given a set of coins and a value V. Find the number of ways we can make change of V.

  #include <bits/stdc++.h>
  using namespace std;
  const int N = 1e3+2;

  int dp[N][N];

  int coinChange(vector<int> &a, int n, int x){
    if(x == 0){
        return 1;
    }
    if(x<0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][x] != -1){
        return dp[n][x];
    }

    dp[n][x]= coinChange(a,n,x-a[n-1]) + coinChange(a,n-1,x);
    return dp[n][x];
  }

  int main(){
    int n;
    cin>>n;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
        }
        
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    // cout<<coinChange(a,n,x);

    vector<vector<int>> dp(n+1, vector<int>(x+1,0));
    dp[0][0] = 1;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < x+1; j++)
        {
            if(j-a[i-1] >= 0){
                dp[i][j] += dp[i][j-a[i-1]];
            }
            dp[i][j] += dp[i-1][j];
        }
        
    }
    cout<<dp[n][x];
    
    return 0;
  } 