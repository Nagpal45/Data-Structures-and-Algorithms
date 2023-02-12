//Find the peak element in array.Peak element is one which is greater than both left and right neighbours of itself.

#include <bits/stdc++.h>
using namespace std;

//Use binary search analyze inices from 0 to n-1
// Comput mid and for each mid checkk if arr[mid] is a peak element.

//else if arr[mid-1] > arr[mid], check left for peak.
//else if arr[mid] < arr[mid+1], check right for peak.

int findPeak(int arr[], int low, int high, int n){
    int mid = low + (high-low)/2;
    if((mid == 0 || arr[mid-1] <= arr[mid])&&(mid ==n-1  || arr[mid+1] <= arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid-1] > arr[mid]){
        return findPeak(arr,low,mid-1,n);
    }
    else{
        return findPeak(arr,mid+1,high,n);
    }
}

int main(){
    int arr[] = {10,9,15,2,23,90,67};
    int n =6;
    cout<<findPeak(arr,0,n-1,n);
    return 0;
}