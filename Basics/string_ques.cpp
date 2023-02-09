#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    //Question-1

    // //convert into upper case
    // string str = "aFHGgfKjdgh";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]-=32;
    //     }
    // }
    // cout<<str<<endl;
    // //transform(s.begin(), s.end(), s.begin(), ::toupper);


    // //convert into lower case
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if(str[i]>='A' && str[i]<='Z'){
    //         str[i]+=32;
    //     }
    // }
    // cout<<str;
    // //transform(s.begin(), s.end(), s.begin(), ::tolower);

    






    //Question-2
    //Form the biggest number from the numeric string.

    // string s ="498723659";
    // sort(s.begin(), s.end(), greater<int>());






    //Question-3
    //Most Repeating letter

    string s = "glhaddfbglahgtrgbofu";
    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }

    char ans ='a';
    int maxF=0;

      for (int i = 0; i < 26; i++)
    {
        if(freq[i]>=maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}