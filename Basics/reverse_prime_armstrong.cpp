#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;


//Check prime
    bool flag=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<"Not prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    


    //reverse number
    int reverse=0;

    while(n>0){
        int last = n%10;
        reverse= reverse*10 + last;
        n = n/10;
    }
    cout<<reverse<<endl;
    



    //Armstrong
    int sum=0;
    int original = n;
    while(n>0){
        int last = n %10;
        sum += pow(last,3);
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
    return 0;
}