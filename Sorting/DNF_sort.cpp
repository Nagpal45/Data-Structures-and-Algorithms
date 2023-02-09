//Also known as 0,1,2 sort

//Divide array in 4 parts
//1. start to low -> Zeros
//2. low to mid -> Ones
//3. mid to high -> Unknown
//4. high to end -> Twos

//We will reduce unknown region and place elements in other three regions till unknown region becomes null


#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfSort(int arr[], int n){
    int low =0;
    int mid=0;
    int high= n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){
    int arr[] = {1,0,2,1,0,1,2,1,2};
    dnfSort(arr,9);

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


//Time Complexity -> O(n)