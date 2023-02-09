//STL container that allows to store pair of values

#include <bits/stdc++.h>
#include <utility>
using namespace std;


// int main(){
//     pair<int,int> p;
//     pair<int,char> p1;
    
//     p1.first = 3;
//     p1.second = 'f';
//     return 0;
// }




//Reduce a given array
//Original: 10 16 7 14 5 3 12 9
//From smallest no. start numbering from 0
//4 7 2 6 1 0 5 3
//Now place original array elements based on this new array elements to sort
//3 5 7 9 10 12 14 16 

bool myCompare(pair<int,int>p1, pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;

    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(), myCompare);
    
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}