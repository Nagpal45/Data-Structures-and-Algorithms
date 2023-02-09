//Many forms
//Ex-> A person can be father and son at same time.

//Types
//1. Compile Time
//      a. Function Overloading
//      b. Operator Overloading
//2. Run Time
//      a. Virtual Functions


//Function Overloading
//Diff. functions with same name but have diff. arguments or diff. type of arguments


//Operator overloading
//Ex-> when you want to add two complex numbers.


//Virtual functions
// If we have same function in both parent and derived class, we need to tell compiler which function to use so we use virtual keyword. Function with virtual keyword doesn't get called.

#include <bits/stdc++.h>
using namespace std;


//function overloading
// class A{
//     public:
//         void fun(){
//             cout<<"I am a func without args"<<endl;
//         }
//         void fun(int x){
//             cout<<"I am a func with int arg"<<endl;
//         }
//         void fun(double x){
//             cout<<"I am a func with double arg"<<endl;
//         }
// };

// int main(){
//     A obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(4.19);
//     return 0;
// }






//operator overloading
// class Complex{
//     private:
//         int real, imag;
//     public:
//         Complex(int r=0, int i=0){
//             real = r;
//             imag = i;
//         }
//         Complex operator +(Complex const &obj){
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }

//     void display(){
//         cout<< real<< " + i"<<imag<<endl;
//     }
// };

// int main(){
//     Complex c1(12,7);
//     Complex c2(6,7);
//     Complex c3 = c1+c2;
//     c3.display();
//     return 0;
// }






//Function Overriding or virtual functions
class base{
    public:
     virtual void print(){
        cout<<"This is a base class"<<endl;
     }
     void display(){
        cout<<"This is a base display function"<<endl;
     }
};

class derived: public base{
    public:
    void print(){
        cout<<"This is a derived class"<<endl;
     }
     void display(){
        cout<<"This is a derived display function"<<endl;
     }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
}