#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    //Searching the matrix for element x.
    //Linear Search used
    int x;
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]==x){
                cout<<"Element is present at row: "<<i<<" and column: "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag==false){
        cout<<"Element not found";
    }

    
    return 0;
}