#include <iostream>
using namespace std;

int main(){
    
    //pattern 1;
    // int row, col;
    // cin>>row>>col;
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++)
    //         cout<<"*";
    //     cout<<endl;
    // }



    //pattern 2
    // int row, col;
    // cin>>row>>col;
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++)
    //         if(i==0 || i==row-1 || j==0 || j==col-1)
    //             cout<<"*";
    //         else{
    //             cout<<" ";
    //         }
    //     cout<<endl;
    // }





    //pattern 3
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }






    // pattern 4
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n+1; j++){
    //             if(j<n-i){
    //               cout<<" ";
    //             }
    //             else{
    //                 cout<<"*";
    //             }
    //     }
    //     cout<<endl;
    // }





    //pattern 5
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<i+1){
    //             cout<<i;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }





    //pattern 6
    // int n;
    // cin>>n;

    // int count=1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }



    //pattern 7
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        int space= 2*n - 2*i;
        for(int j=1; j<=space; j++){
        cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        int space= 2*n - 2*i;
        for(int j=1; j<=space; j++){
        cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}