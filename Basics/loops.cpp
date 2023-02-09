#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;

    //for loop

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;


    //while loop

    while(n>0){
        cout<<n;
        cin>>n;
    }


    //do-while loop
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);

    return 0;
}