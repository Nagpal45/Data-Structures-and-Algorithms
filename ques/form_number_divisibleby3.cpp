//for given array and integer k, check if any subarray of size k exists in array suc that elements in the subarray form a number divisible by 3.


//Sliding Window
//1. sum of k initial elements from the array.
// 2. start subtracting elements from the end and adding from the end.
//3. At each step, check if sum divisible by 3 or not.if it is, print the elements.

#include <bits/stdc++.h>
using namespace std;

void formNumber(vector<int> arr, int k){
    pair<int,int> ans;
    int sum =0;

    for (int i = 0; i < k; i++)
    {
        sum +=arr[i];
    }
    bool found = false;
    if(sum %3==0){
        ans = make_pair(0,k-1);
        found = true;
    }
    for (int j = k; j < arr.size(); j++)
    {
        if(found){
            break;
        }
        sum = sum + arr[j] -arr[j-k];

        if(sum%3==0){
            ans = make_pair(j-k+1, j);
            found = true;
        }
    }
    if(!found){
        ans =make_pair(-1,0);
    }
    if(ans.first ==-1){
        cout<<"No such subarray exists";
    }
    else{
        for (int i = ans.first; i <=ans.second; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}

int main(){
    vector<int> arr = {84,23,45,12,56,82};
    int k =3;

    formNumber(arr,k);
    return 0;
}