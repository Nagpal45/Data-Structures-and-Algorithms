#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}



void fibonacci(int num){
    int t1=0;
    int t2=1;
    int next;
    for(int i=1; i<=num; i++){
        cout<<t1<<endl;
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return;
}


int fact(int num){
    int fact=1;
    for(int i=2; i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    
    //check prime
    // int a, b;
    // cin>>a>>b;
    // for(int i=a; i<=b;i++){
    //     if(isPrime(i)){
    //         cout<<i<<endl;
    //     }
    // }




    //fibonacci series
    // int n;
    // cin>>n;
    // fibonacci(n);




    //factorial
    // int n;
    // cin>>n;
    // int ans = fact(n);
    // cout<<ans<<endl; 
    



    //Calculate nCr
    // int n,r;
    // cin>>n,r;

    // int ans = fact(n)/(fact(r) * fact(n-r));
    // cout<<ans<<endl;




    //Pascal Triangle;  
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << fact(i)/(fact(j) * fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}