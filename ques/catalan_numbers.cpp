//sequence of natural numbers that occur in various counting problems, often involving recursively defined objects.
//their closed form is in terms of binomial coefficients.
//C0 = 1
//C1 = 1
//C2 = C0C1 + C1C0 = 2
//C3 = C0C2 + C1C1 + C2C0 = 5
//C4 = C0C3 + C1C2 + C2C1 + C3C0 = 14
#include <bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    if(n<=1){
        return 1;
    }
    int res =0;
    for (int i = 0; i <= n-1; i++)
    {
        res += catalan(i)*catalan(n-i-1);
    }
    return res;
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        cout<<catalan(i)<<" ";
    }
    cout<<endl;    
    return 0;
}

//Applications
//1. Possible BSTs
//2. Paranthesis/bracket combinations
//3. Possible forests
//4. Ways of tringulations
//5. Possible paths in matrix
//6. Dividing a circle using N chords
//7. Dyck words of given length and much more