//1.Create a min heap of pairs
//2. Insert first element, array Number of all the sorted array in minheap
//3. Pop element from the minHeap and store it into the answer array. Insert the next element of the sorted Array into the min heap.
//4. Keep track of indices of elements.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    vector<vector<int>> a(k);
    for(int i =0; i<k; i++){
        int size;
        cin>>size;

        a[i] = vector<int>(size);
        for (int j = 0; j < size; j++)
        {
            cin>>a[i][j];
        }
    }
    vector<int> idx(k,0);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    for (int i = 0; i < k; i++)
    {
        pair<int,int> p;
        p.first =a[i][0];
        p.second=i;
        pq.push(p);
    }
    
    vector<int> ans;

    while(!pq.empty()){
        pair<int,int> x= pq.top();
        pq.pop();

        ans.push_back(x.first);

        if(idx[x.second]+1 < a[x.second].size()){
            pair<int,int> p;
            p.first = a[x.second][idx[x.second]+1];
            p.second = x.second;
            pq.push(p);
        } 
        idx[x.second] += 1;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    

    return 0;
}