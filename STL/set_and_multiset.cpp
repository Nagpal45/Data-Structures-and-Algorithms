
#include <bits/stdc++.h>
using namespace std;

int main(){
    // set<int> s;
    // multiset<int> s;
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for (auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    // s.erase(2);
    // s.erase(3);
    s.erase(s.find(3));
    for(auto i: s){
        cout<<i<<" ";
    }
    
    return 0;
}

//orderd set -> O(logN) time complexity
//unorderd set -> Avg O(1) time complexity


