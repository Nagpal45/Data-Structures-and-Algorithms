#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}



int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}




int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    //Linear search
    //Time complexity : O(n)
    int key;
    cin>>key;
    cout<< "Key is present at position: "<<linearSearch(arr,n,key)<<endl;




    //Binary search
    //Array should be sorted
    //Time complexity : O(logn)
    cout<< "Key is present at position: "<<binarySearch(arr,n,key);

    return 0;
}