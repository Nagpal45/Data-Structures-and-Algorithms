//Ugly numbers are numbers whose prime factors are 2,3 or 5.The first 10 ugly numbers are 1,2,3,4,5,6,8,9,10,12.
//Given a number n, print n'th uglu number.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int c2(0), c3(0), c5(0);
    vector<int> dp(n+1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = min({2*dp[c2], 3*dp[c3], 5*dp[c5]});

        if(2*dp[c2] == dp[i]){
            c2++;
        }
        if(3*dp[c3] == dp[i]){
            c3++;
        }
        if(5*dp[c5] == dp[i]){
            c5++;
        }
    }
    cout<<dp[n-1];
    
    return 0;
}