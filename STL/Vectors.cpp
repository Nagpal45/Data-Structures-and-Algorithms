//Vectors are dynamic arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    
    //Insertion
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //Print
    //Method-1
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    //Method-2
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }

    //Method-3
    for(auto element: v)
    cout<<element<<endl;


    //Deletion
    v.pop_back();


    vector<int> v2 (3,50);                  //Initialise vector with 3 elements of value 50


    //Swap values of vectors
    swap(v,v2);
    for(auto element: v)
    cout<<element<<endl;
    for(auto element: v2)
    cout<<element<<endl;


    //sort
    sort(v.begin(),v.end());
    return 0;
}