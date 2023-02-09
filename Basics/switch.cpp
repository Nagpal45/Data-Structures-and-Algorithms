#include <iostream>
using namespace std;

int main(){
    
    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    
    case 'b':
        cout<<"Hey";
        break;

    case 'c':
        cout<<"Hiii";
        break;

    case 'd':
        cout<<"Hola";
        break;

    case 'e':
        cout<<"Namaste";
        break;
    
    default:
        cout<<"OK";
        break;
    }

    return 0;
}