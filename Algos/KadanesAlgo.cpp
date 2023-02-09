#include <iostream>
using namespace std;

//Question-1
//Maximum Subarray Sum
//Single loop -> optimized
//Negative terms neglected

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int currSum =0;
//     int maxSum =INT_MIN;

//     for(int i=0; i<n; i++){
//         currSum += arr[i];
//         if(currSum<0){
//             currSum=0;
//         }
//         maxSum = max(maxSum, currSum);
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }






//Question-2
//Maximum circular subarray sum
//first element comes again after last element.

//Case 1: {-1, -4, -6, 7, 5, -4}
//This is non wrapping as using kadane's algo we can directly tell max sum is 7+5=12 and no need to go to -1 after last -4.

//Case 2: {4, -4, 6, -6, 10, -11, 12}
//This wrapping as max sum will be obtained when we go form 12(last) to 4(first) to 10.
//Elements that are included in sum are contributing while others are non contributing. Non contributing are non wrapping.
//Total sum - non contributing sum = max sum

int kadane(int arr[], int n){
    int currSum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxsum= max(maxsum, currSum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum= kadane(arr,n);
    int totalSum=0;

    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i]; 
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(arr,n);

    cout<< max(wrapSum, nonwrapSum);

    return 0;
}