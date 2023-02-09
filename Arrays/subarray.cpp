#include <iostream>
using namespace std;


//subarray is continuous part of an array.

//no. of subarrays of array with n elements = n*(n+1)/2

//Every subarray is a subsequence.




//Question-1: Sum of all subarrays
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
    

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int current=0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             current += arr[j];
//             cout<<current<<endl;
//         }
//     }
//     return 0;
// }




//1 sec = 10^8 operations





//Question-2: Longest arithmetic subarray
//arithmetic array contains at least 2 integers and the difference between consecutive integers is equal.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans=2;
//     int prevCommonDiff = arr[1]-arr[0];
//     int j=2;
//     int currLen = 2;

//     while(j<n){
//         if(prevCommonDiff == arr[j]-arr[j-1]){
//             currLen++;
//         }
//         else{
//             prevCommonDiff = arr[j]-arr[j-1];
//             currLen=2;
//         }
//         ans= max(ans,currLen);
//         j++;
//     }
//     cout<<ans;
//     return 0;
// }






//Question-3
//find a continuous subarray which adds to given number S.
// int main(){
//     int n, s;
//     cin>>n>>s;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int i=0, j=0, st=-1, end=-1, sum=0;

//     while((j<n) && (sum+arr[j]<=s)){
//         sum += arr[j];
//         j++;
//     }
//     if(sum==s){
//         cout<<i+1<<" "<<j<<endl;
//         return 0;
//     }

//     while(j<n){
//         sum += arr[j];
//         while(sum>s){
//             sum -= arr[i];
//             i++;
//         }
//         if(sum == s){
//             st = i+1;
//             end = j+1;
//             break;
//         }
//         j++;
//     }
//     cout<<st<<" "<<end<<endl;
// }





 