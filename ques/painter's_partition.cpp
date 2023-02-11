//n = length of diff boards
// m = painters available
// A painter paints 1 unit of board in 1 unit of time and ech painter will paint consecutive boards. find the min time that will be required to paint all the boards.


//Apply binary search for minimum and maximum possible values of 'min' length of boards to be painted.
//Check the feasibility of this chosen value by assigning boards to each painter in a sequential manner,while the current length of assigned boards dont't exceed the value set by binary search.

#include <bits/stdc++.h>
using namespace std;

int findFeasible(int boards[], int n, int limit){
    int sum =0, painters =1;
    for (int i = 0; i < n; i++)
    {
        sum+= boards[i];
        if(sum>limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int paintersPartition(int boards[], int n, int m){
    int totalLength = 0, k=0;
    for (int i = 0; i < n; i++)
    {
        k= max(k,boards[i]);
        totalLength += boards[i];
    }
    int low = k, high = totalLength;
    while(low<high){
        int mid = (low+high)/2;
        int painters = findFeasible(boards, n, mid);
        if(painters<=m){
            high = mid;
        }else{
            low = mid+1;
        }
    }
    return low;
}

int main(){
    int arr[]= {10,20,30,40};
    int n=4;
    int m=2;
    cout<<paintersPartition(arr,n,m);
    return 0;
}