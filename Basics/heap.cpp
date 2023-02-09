#include <iostream>
using namespace std;

//heap is a free store where size is not specified initially instead function or variables are dynamically stored.

//We make a pointer in stack that containes address of element stored in heap.

//Dangling pointer
//Pointer pointing heap which doesn't have any value.



int main(){
    
    int a=10;
    int *p =new int();
    *p=10;
    delete(p);
    
    p=new int[4];
    delete[]p;
    p=NULL;

    return 0;
}

//We have to allocate and deallocate memory manually to avoid memory leak.