#include <iostream>
using namespace std;

//function calls itself to make the problem smaller is called recursion.

//sum till n
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = sum(n-1);
    return n + prevSum;
}


//n raised to power p
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
}

//factorial of a number
int factorial(int n){
    if(n==0 | n==1){
        return 1;
    }
    return n*factorial(n-1);
}

//fibonacci series
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n,p;
    cin>>n>>p;  
    cout<<sum(n)<<endl;
    cout<<power(n,p)<<endl;
    cout<<factorial(n)<<endl;
    return 0;
}