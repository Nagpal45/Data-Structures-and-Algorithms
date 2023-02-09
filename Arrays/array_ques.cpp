#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


//Question-1: output max of array elements
// int main(){
//     int maxNo = INT_MIN;
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         maxNo = max(maxNo, arr[i]);
//         cout<<maxNo<<endl;
//     }
//     return 0;
// }



//max either increases or remains constant for cumulative elements, this is known as non decreasing.





//Question-2: Record Breaking Day
//Two conditions:-
//1. Strictly greater than all previous values.
//2. Strictly greater than following value.

// int main(){

//     int n;
//     cin>>n;
//     int arr[n+1];
//     arr[n]=-1;

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int maxNo = -1;

//     for(int i=0; i<n; i++){
//         if(arr[i]>maxNo && arr[i]>arr[i+1]){
//             ans++;
//         }
//         maxNo = max(maxNo, arr[i]);
//     }
//     cout<<ans<<endl;

//     return 0;
// }





//Question-3
//Find the first repeatring element in the array of integers ,i.e, element occuring more than 1 time and having lowest index.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     const int N = 1e6+2;
//     int idx[N];

//     for(int i=0;i<N; i++){
//         idx[i]-=1;
//     }

//     int minidx = INT_MAX;
    
//     for(int i=0; i<N; i++){
//         if((idx[arr[i]]) != (-1)){
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]] = i;
//         }
//     }
//     if(minidx == INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<< minidx + 1 <<endl;
//     }

//     return 0;
// }





//Question 4
//find the smallest positive number missing from the array.
// int main(){

//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     const int N = 1e6+2;
//     bool check[N];
//     for(int i=0; i<N; i++){
//         check[i]=false;
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]>=0){
//             check[arr[i]]=1;
//         }
//     }
//     int ans=-1;

//     for(int i=1; i<N; i++){
//         if(check[i]==false){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }





//Question 5
//Pair Sum
//Optimized soln -> Array must be sorted

bool pairSum(int arr[], int n, int k){
    int low=0;
    int high = n-1;

    while(low<high){
        if(arr[low] + arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairSum(arr,8,k)<<endl;
    return 0;
}