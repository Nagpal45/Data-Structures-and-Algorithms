//Given is an array with n elements that represent n positions along a straight line. Find k elements such that minimum distance between any 2 elements in the maximum possible.

//Binary search
//1. Sort the array for binary search.
//2. PIck middle element as result and check for its feasability.
//3.if feasible, search the right half of the array with larger minimum distance.
//Else, search the left half of the array.

#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k){
    int pos = arr[0], elements = 1;
    for(int i =1; i<n; i++){
        if(arr[i]-pos >= mid){
            pos = arr[i];
            elements++;
            if(elements ==k){
                return true;
            }
        }
    }
    return false;
}

int largestMinDist(int arr[], int n, int k){
    sort(arr, arr+n);

    int result = -1;
    int left = 1;
    int right = arr[n-1];

    while(left< right){
        int mid = (left+right)/2;
        if(isFeasible(mid,arr,n,k)){
            result = max(result,mid);
            left = mid+1;
        }
        else{
            right = mid;
        }
    }
    return result;
}

int main(){
    int arr[] = {1,2,8,4,9};
    int n = 5;
    int k = 3;
    cout<<largestMinDist(arr,n,k)<<endl;
    return 0;
}