#include <iostream>
#include<string>
using namespace std;


//Question-1
//Reverse a string
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros= s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }


// int main(){
//     reverse("vaibhav");
//     return 0;
// }






//Question-2
//Replace pi with 3.14 in string
// void replacePi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }

// int main(){
// replacePi("pipppiiipi");
// }





//Question-3
//Remove all the duplicates from the string
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = removeDup(s.substr(1));
    
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// int main(){
//     cout<<removeDup("aaaabbbeeecdddd");
//     return 0;
// }






//Question-4
//Move all x in string to the end
// string moveAllx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = moveAllx(s.substr(1));

//     if(ch=='x'){
//         return (ans+ch);
//     }
//     return ch+ans;
// }   
// int main(){
//     cout<<moveAllx("axxbdxcefxhix");
// }






//Question-5
//Generate all substrings of string
// void subsequence(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros = s.substr(1);
//     subsequence(ros, ans);
//     subsequence(ros, ans+ch);
// }

// int main(){
//     subsequence("ABC","");
//     cout<<endl;
// }







//Question-6
//Generate all substrings of string with ASCII number
// void subsequence(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     int code=ch;
//     string ros = s.substr(1);
//     subsequence(ros, ans);
//     subsequence(ros, ans+ch);
//     subsequence(ros, ans+ to_string(code));
// }

// int main(){
//     subsequence("AB","");
//     cout<<endl;
// }








//Question-7
//Keypad problem->Print all possible words from phone digits.
string keypadArr[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    string code = keypadArr[ch-'0'];
    string ros= s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros, ans+code[i]);
    }
}

int main(){
    keypad("23","");
}