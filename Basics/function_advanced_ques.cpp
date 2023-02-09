#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i;
    }
    return ans;
}




bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
       b=x;
       c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }  
}





int reverse(int n){
    int ans=0;
    while (n>0){
        int last = n%10;
        ans = ans*10  + last;
        n /= 10;
    }
    return ans;
}






int addBinary(int a, int b){
    int ans = 0;
    int prevCarry = 0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(prevCarry=1){
                ans =ans*10 + 0;
                prevCarry=1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a>0){
        if(prevCarry == 1){
            if(a%2 ==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (a%2);
        }
        a/=10;
    }
    while (b>0){
        if(prevCarry == 1){
            if(b%2 ==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (b%2);
        }
        b/=10;
    }
    if(prevCarry == 1){
        ans = ans*10 + 1;
    }
    ans=reverse(ans);
    return ans;
}


int main(){

    
    //Sum till n numbers
    // int n;
    // cin>>n;
    // cout<<sum(n)<<endl;




    //Pythagorean Triplet
    // int x,y,z;
    // cin>>x>>y>>z;

    // if(check(x,y,z)){
    //     cout<<"Pythagorean triplet";
    // }
    // else{
    //     cout<<"Not pythagorean triplet";
    // }




    //Add Two Binary Numbers
    int a, b;
    cin>>a>>b;

    cout << addBinary(a,b);

    return 0;
}