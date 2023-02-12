//find the maximum perfect number in a subarray of size k.
//Perfect number is equal to sum of its proper divisors except for number itself.
//Ex 6 = [1+2+3]

//convert given array into binary array
// Traverse the array and if number at index i is perfect number then replace value at ith index with '1', else with 0

//1. Initialize variable to store sum of divisors
//2. Traverse every number less than arr[i] and add it to sum if it is a divisor of arr[i].
//3. If the sum of all divisors is equal to arr[i], them only the number is a perfect number. 

//Find the maximum sum of a subarray from all possible subarrays of size k.

#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k){
    if(n<k){
        cout<<"invalid values"<<endl;
        return -1;
    }
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res+=arr[i];
    }
    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum+= arr[i]- arr[i-k];
        res = max(res,sum);
    }
    return res;
}

bool isNumberPerfect(int n){
    int sum =1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }
            else{
                sum+=i + n/i;
            }
        }
    }
    if(sum==n && n!=1){
        return true;
    }
    return false;
}

int maxNumofPerfects(int arr[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        if(isNumberPerfect(arr[i])){
            arr[i] =1;
        }
        else{
            arr[i]=0;
        }
    }
    return maxSum(arr,n, k);
}

int main(){
    int arr[] = {28,2,3,6,496,99,8128,24};
    int k = 4;
    int n=8;
    cout<<maxNumofPerfects(arr,n,k);
    return 0;
}