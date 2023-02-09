#include <iostream>
using namespace std;

int main(){


    //Example-1
    int pocketmoney=3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;               //skip to next iteration of loop
        }

        if(pocketmoney==0){
            break;          //terminates loop
        }

        cout<<"You can go out today";
        pocketmoney-=300;
    }




    //Example-2
    for(int i=0; i<100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }




    // Example-3
    int n, i;
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Non prime";
            break;
        }
    }
    if(i==n){
        cout<<"Prime";
    }

    return 0;
}




    //Example-4
    int a,b;
    cin>>a>>b;

    for(int num=a; num<=b; num++){
        for(int i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==n){
            cout<<num<<endl;
        }
    }

