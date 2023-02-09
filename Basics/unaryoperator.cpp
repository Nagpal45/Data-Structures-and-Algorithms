#include <iostream>
using namespace std;

int main(){
    int i=1;
    int j=2;
    int k;

        //1     //3
    i = i++ + ++i;
    cout<<i<<endl;


       //1  //2  //1  //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;

    int l=0;
        //0  //0   //1   //1
    l = l++ - --l+ ++l - l--;
    cout<<l;

    
    return 0;
}