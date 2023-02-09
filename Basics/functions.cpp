#include <iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int a,int b){
    print(a);
    print(b);
    return a+b;
}

int main(){
    int x, y;
    cin>>x>>y;
    cout<<add(x,y);

    return 0;
}


//As soon as function is called, a memory chunk is allocated to function called as stack frame, it contains variables and code of the function. When function return something, it gets popped from the stack.