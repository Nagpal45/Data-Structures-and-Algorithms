#include <iostream>
using namespace std;

int main(){
    int savings;
    cin >>savings;

    if(savings>5000){
        cout<<"Shoes";
        if(savings>10000){
            cout<<"Nike";
        }
        else{
            cout<<"Adidas";
        }
    }
    else if(savings>2000){
        cout<<"Jeans";
    }
    else{
        cout<<"Tshirt";
    }
    return 0;
}