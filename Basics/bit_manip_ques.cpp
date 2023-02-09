#include <iostream>
using namespace std;



//Question-1
//Given no. is power of 2 or not
// bool isPowerof2(int n){
//     return (n && !(n &n-1));
// }

// int main(){
//     cout<<isPowerof2(16)<<endl;
//     return 0;
// }






//Question-2
//Count no. of ones in binary representation of no.
// int numberOfOnes(int n){
//     int count=0;
//     while(n){
//         n = n& (n-1);
//         count++;
//     }
//     return count;
// }

// int main(){

//     cout<<numberOfOnes(19);
//     return 0;
// }






//Question-3
//Generate all subsets of a set
// void subsets(int arr[], int n){
//     for (int i = 0; i < (1<<n); i++){
//         for (int j = 0; j < n; j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     subsets(arr,4);
//     return 0;
// }





//Question-4
// Find unique number in an array, i.e, not repeating, where all others present twice
// int unique(int arr[], int n){
//     int xorSum=0;
//     for(int i=0; i<n; i++){
//         xorSum = xorSum^arr[i];
//     }
//     return xorSum;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3};
//     cout<<unique(arr,7)<<endl;
//     return 0;
// }






//Question-5
//Find 2 unique numbers where all others present twice
// int getBit(int n, int pos){
//     return ((n &(1<<pos))!=0);
// }

// void uniques(int arr[], int n){
//     int xorsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor=xorsum;
//     int setbit=0;
//     int pos=0;
//     while(setbit!=1){
//         setbit = (xorsum & 1);
//         pos++;
//         xorsum = xorsum>>1;
//     }
//     int newxor=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(getBit(arr[i],pos-1)){
//             newxor = newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }

// int main(){
//     int arr[]={1,2,3,1,2,3,5,7};
//     uniques(arr,8);
//     return 0;
// }







//Question-6
//Find unique number where all others present thrice.
bool getBit(int n, int pos){
    return ((n &(1<<pos))!=0);
}

int setBit(int n, int pos){
    return (n|(1<<pos));
}
int unique(int arr[], int n){
    int result=0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if((sum%3)!=0){
            result = setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;
}