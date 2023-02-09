#include <iostream>
using namespace std;


//variables that store the address of other variables.


int main(){
    // int a =10;
    // int *aptr;
    // aptr = &a;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<aptr<<endl;
    // cout<<*aptr<<endl;
    

    // //Pointer arithmetic
    // aptr++;
    // cout<<aptr<<endl;






    //Pointer arrays
    // int arr[]= {10,20,30};
    // cout<<*arr<<endl;

    // int *ptr = arr;
    // for (int i = 0; i < 3; i++)
    // {
    //     // cout<<(arr+i)<<endl;
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    






    //Pointer to pointer
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<*p;
    // int **q=&p;
    // cout<<*q<<endl;
    // cout<<**q<<endl;





    //Passing pointer to function
    int a=2;
    int b=4;

    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}