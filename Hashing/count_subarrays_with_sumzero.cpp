//1.Compute prefix sum and map it.
//2. for every key, choose 2 values from all the occurences of particular prefsum
//3. For prefsum =0, we have to also include them.

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
    map<int, int> cnt;
    int prefsum =0;

    for (int i = 0; i < n; i++)
    {
        prefsum += a[i];
        cnt[prefsum]++;
    }
    int ans =0;

    map<int,int> :: iterator it;

    for (it = cnt.begin(); it != cnt.end(); it++)
    {
        int c = it->second;
        ans += (c*(c-1))/2;

        if(it->first ==0){
            ans += it->second;
        }
    }
    cout<<ans<<endl;

    return 0;
}