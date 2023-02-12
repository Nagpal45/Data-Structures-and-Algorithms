//For given array and integer k check f subarray of size k exists in the array such that concatenation of eelements form a palindrome.

//SLiding Window
//1. Store concatenation of initial k elements
//2. Iterate over the array and start deleting elements from start and adding elements from the end.
//3. at each step, check if concatenation is a palindrome.



#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int temp  = n, number=0;
    while(temp>0){
        number = number*10 + temp%10;
        temp = temp/10;
    }
    if(number==n){
        return true;
    }
    return false;
}

int findPaindromicSubarray(vector<int> arr, int k){
    int num =0;
    for (int i = 0; i < k; i++)
    {
        num = num*10 +arr[i];
    }
    if(isPalindrome(num)){
        return 0;
    }
    for (int j = k; j < arr.size(); j++)
    {
        num = (num%(int)pow(10,k-1))*10 +arr[j];

        if(isPalindrome(num)){
            return j-k+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,3,5,1,1,5};
    int k=4;
    int ans = findPaindromicSubarray(arr,k);
    if(ans==-1){
        cout<<"No palindromic subarray exists";
    }
    else{
        for (int i = ans; i < ans+k; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    return 0;
}