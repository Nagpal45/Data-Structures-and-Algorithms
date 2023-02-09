#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        cout<<array[i]<<endl;
    }

    // int array[4] = {10, 20, 30, 40};
    
    // array[0]=10;
    // array[1]=20;
    // array[3]=30;



    //Find max and min
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++){
        maxNo= max(maxNo,array[i]);
        minNo = min(minNo, array[i]);
        // if(array[i]>maxNo){
        //     maxNo=array[i];
        // }
        // if(array[i]<minNo){
        //     minNo=array[i];
        // }
    }
    cout<<maxNo<<" "<<minNo;

    return 0;
}