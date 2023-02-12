//Max sum subarray of size =k and sum<x

//Sliding window
//1. Calculate sum of first k elements
//2. Initialize ans with this sum
//3. Iterate over the rest of the arr, keep adding one element in sum and removing one from start. Compare new sum with ans in each iteration

// Time complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n, int k, int x){
    int sum =0, ans =0;

    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    if(sum < x){
        ans = sum;
    }
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i-k];
        sum = sum + arr[i];

        if(sum < x){
            ans = max(ans,sum);
        }
    }
    cout<< ans<<" is the max subarray sum";
}

int main(){
    int arr[]= {7,5,4,6,8,9};
    maxSubarraySum(arr, 6, 3, 20);
    return 0;
}