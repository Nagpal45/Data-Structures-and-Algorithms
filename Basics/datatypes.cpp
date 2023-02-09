#include <iostream>         //preprocessor directive and header file

using namespace std;            //cout and cin belongs from standard file that is imported here

int main(){         //tells compiler execution starts here
    int a;
    float b;
    char c;
    bool d;
    
    a=12;

    cout<<"Size of int: "<< sizeof(a)<<endl;
    
    cout<<"Size of float: "<< sizeof(b)<<endl;
    
    cout<<"Size of char: "<< sizeof(c)<<endl;
    
    cout<<"Size of bool: "<< sizeof(d)<<endl;


    //Type modifiers
    //signed, unsigned, long, short

    short int si;
    long int li;

    cout<<"Size of shortint: "<< sizeof(si)<<endl;
    cout<<"Size of longint: "<< sizeof(li)<<endl;

    return 0;           //exit status of function
}