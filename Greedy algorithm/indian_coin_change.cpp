//Greedy algorithm -> take decision based on what is best at present.

// given an array of denominations and value X . find the minimum number of coins reqired to make value X.

 //1. Start from the largest value till we can include it, take it.

 //2. Else move on the smaller value.


 #include <bits/stdc++.h>
 using namespace std;
 
 int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x/a[i];
        x-= x/a[i] * a[i];
    }
    
    cout<<ans<<endl;

    return 0;
 }
