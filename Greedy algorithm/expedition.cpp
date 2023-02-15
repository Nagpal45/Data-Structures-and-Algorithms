//A group of cows grabbed a truck and went on expedition deep into the jungle. The truck leaks one unit of fuel every unit of distance it travels.To repair the truck, the cow needs to drive to the nearest town. on this road, between the town and the current location there are N fuel stops where the cows can stop to acquire additional fuel.The capacity of tank is sufficiently large to hold any amount of fuel.
///The cows want to make the minimum possible number of stops for fuel on the way to  town.
//Initial units of fuel: P
//Initial distance from town : L
//Determine min number of stops to reach the town.

#include <bits/stdc++.h>
using namespace std;

//1. Create a maxheap, which stores the fuels available at the stops that we have traversed.
//2. Sort the stops on the basis of distance of stops from initial position of truck.
//3. keep iterating on the stops and whenever fuel in the tank of truck becomes empty take the fuel from the maxheap and add it to the truck.
//4. Maintain the count of stops from which we have taken fuel.

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        int l,p;
        cin>>l>>p;

        for (int i = 0; i < n; i++)
        {
            a[i].first = l- a[i].first;
        }
        sort(a.begin(), a.end());

        int ans = 0;
        int curr = p;

        priority_queue<int,vector<int>> pq;
        bool flag =0;

        for (int i = 0; i < n; i++)
        {
            if(curr >= l){
                break;
            }
            while(curr< a[i].first){
                if(pq.empty()){
                    flag =1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }
            if(flag){
                break;
            }
            pq.push(a[i].second);
        }
        if(flag){
            cout<<"-1";
            continue;
        }
        while(!pq.empty() && curr <l){
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if(curr<l){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}