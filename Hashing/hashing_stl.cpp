// maps
// insertion, accessing, deletion -> O(logn)
//implemented using red black trees
//key-value pairs

//unordered maps
//insertion, accessing -> O(1)
//deletion -> O(n)
//implemented using hash tables

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m1;
    unordered_map<int,int> m2;

    m1[8] = 2;
    cout<<m1[8];
    return 0;
}