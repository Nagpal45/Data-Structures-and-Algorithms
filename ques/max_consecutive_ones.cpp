//Given an arrray of 0s and 1s, we may change upto k values from 0 to 1.Return the length of the longest subarray that contain only 1s.

//Longest subarray with atmost k zeros
//for each a[j] try to find longest subarray
//if a[i]~a[j] has zeros <= k ,increment j
//if a[i]~a[j] has zeros > k ,increment i as well as j


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i :a){
        cin>>i;  
    }

    int zerocnt=0,i=0,ans=0;

    for(int j=0; j<n; j++){
        if(a[j]==0){
            zerocnt++;
        }
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        ans = max(ans,j-i+1);
    }
    cout<<ans;

    return 0;   
}