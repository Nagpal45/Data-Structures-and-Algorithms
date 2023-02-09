#include <iostream>
using namespace std;

//n1+n2-n3
//n3 = n1 intersection n2

int divisible(int n, int a, int b){
    int c1=n/a;
    int c2= n/b;
    int c3= n/(a*b);
    return c1+c2-c3;
}

int main(){
    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b);
    return 0;
}