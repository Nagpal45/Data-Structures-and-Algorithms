//Calculate minimum sum of k consecutive elements

//1. Compute sum of first k elements
//2. While inc i, subtract a[i-1] and add a[i+k-1] in previous sum which will become current sum.

#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n,k;
    cin>>n>>k;

    vector<int> a(n);

    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    int sum =0, ans =INT_MAX;

    for (int i = 0; i < k; i++)
    {
        sum+=a[i];
    }
    ans =min(ans,sum);

    for (int i = 1; i < n-k+1; i++)
    {
        sum -= a[i-1];
        sum+= a[i+k-1];
        ans = min(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}