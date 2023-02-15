//You are given n files with their computation times in an array.

//take two files, add their computation times and append it to the list of computation times.do this until we are left with only one file in the array. We have to do this operation such that we get minimum cost finally.


//1. Push all elements to a minheap
//2. Take 2 top elements one by one and add the cost to the answer. Push the merged file to the minheap
//3. when single element remains , output the cost.

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

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
    minHeap.push(a[i]);
    }
    int ans =0;

    while(minHeap.size()>1){
        int e1 = minHeap.top();
        minHeap.pop();
        int e2 = minHeap.top();
        minHeap.pop();

        ans += e1+e2;
        minHeap.push(e1+e2);
    }
    cout<<ans<<endl;

    return 0;
}