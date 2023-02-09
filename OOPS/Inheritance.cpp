#include <iostream>
using namespace std;

//Types
//1. Single -> B is child of A
//2. Multiple -> C is child of A and B
//3. Multi Level -> C is child of B and B is child of A
//4. Hybrid -> D is child of B and C, B is child of A
//5. Hierarichal -> B has 2 children and C has 2 children, B and C are children of A

class A{
    public:
        void Afunc(){
            cout<<"Func A"<<endl;
        }
};

class B{
    public:
        void Bfunc(){
            cout<<"Func B"<<endl;
        }
};

class C: public A, public B{
    public:
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}