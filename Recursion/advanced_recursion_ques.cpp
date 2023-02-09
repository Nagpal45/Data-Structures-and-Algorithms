#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//Question-1
//Permutations of a string
// void permutation(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         string ros = s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// int main(){
//     permutation("ABC","");
//     return 0;
// }






//Question-2
//Count the number of paths possible from start point to end point in a game.
//Only one direction

// int countPath(int s, int e){
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count=0;
//     for(int i=1; i<=6;i++){
//         count += countPath(s+i,e);
//     }
//     return count;
// }
// int main(){
//     cout<<countPath(0,3)<<endl;
// }





//Question-3
//Number of paths in a maze
//Two directions
// int countPath(int n, int i, int j){
//     if((i==n-1) && (j==n-1)){
//         return 1;
//     }
//     if(i>=n || j>=n){
//         return 0;
//     }
//     return (countPath(n,i+1,j) + countPath(n,i,j+1));
    
// }
// int main(){
//     cout<<countPath(3,0,0);
// }






//Question-4
//Tiling problem->no. of ways to tile the board of size 2xn and tiles of size 2x1
// int tilingWays(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return (tilingWays(n-1)+tilingWays(n-2));
// }

// int main(){
//     cout<<tilingWays(4)<<endl;
// }





//Question-5
//Friends pairing problem-> No. of ways in which friends can be paired up or remain single
// int friendsPairing(int n){
//     if(n==0 || n==1 || n==2){
//         return n;
//     }
//     return (friendsPairing(n-1) + friendsPairing(n-2)*(n-1));
// }
// int main(){
//    cout<<friendsPairing(4);
// }






//Question-6
//Knapsack problem->knapsack of capacity W and n items with diff weight.Find max value of items that can be put in knapsack.
int knapsack(int wt[], int val[], int n, int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(val,wt,n-1,W);
    }
    return max(knapsack(val,wt,n-1,W-wt[n-1]) + val[n-1], knapsack(val,wt,n-1,W));
}
int main(){
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;

    cout<<knapsack(wt,value,3,W);
}