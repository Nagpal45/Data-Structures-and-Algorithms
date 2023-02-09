#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    //pattern 1
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n+1-i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }




    //pattern 2
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         if(i%2!=0 && j%2!=0){
    //             cout<<"1";
    //         }
    //         else if(i%2==0 && j%2==0){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }





    //pattern 3
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }





    //pattern 4
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }





    //pattern 5
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=i; j>0; j--){
    //         cout<<j;
    //     }
    //     for(int j=2; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }





    //pattern 6
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n; i>0; i--){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    //pattern 7
    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            if(((i+j)%4==0) || ((i+j)%4==2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}