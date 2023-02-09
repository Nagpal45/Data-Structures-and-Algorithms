//Given an array and a value, find if there exists three numbers whose sum is equal to given value.
//Brute Force -> O(n^3)


//SOLVE USING TWO POINTER TECHNIQUE
//O(n^2)
//1. Sort the array.
//2. Traverse the array and fix the first element of the triplet. the problem reduces to find if there exists two elements having sum-array[i]. 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        int lo = i+1, hi=n-1;
        while(lo<hi){
            int current = a[i] + a[lo] + a[hi];
            if(current == target){
                found = true;
            }
            if(current < target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}