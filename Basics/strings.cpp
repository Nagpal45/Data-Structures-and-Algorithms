#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//Strings are dynamic while character arrays are static.


int main(){
    // string str;
    // string str1(5,'n');
    // string str2="VaibhavNagpal";
    // string str3;
    // getline(cin,str3);
    
    // cin>>str;
    // cout<<str<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<str3<<endl;



    //string functions

    // string s1 = "fam";
    // string s2 = "ily";
    
    //1.    cout<<s1+s2;
    //      s1.append(s2);
    //      cout<<s1;

    // 2.   cout<<s1[1];

    //3.     s1.clear();

    //4.     cout<<s2.compare(s1);

    // 5.   if(s1.empty()){
    //      cout<<"string empty";
    //      }

    // 6.   s1.erase(3,3);
    //      cout<<s1;

    //7.    cout<<s1.find("am")

    //8.    s1.insert(2,"lol");
    //      cout<<s1;

    //9.    cout<<s1.size();
    //      cout<<s1.length();

    //10.   string s = s1.substr(6,4);
    //      cout<<s;

    //11.   int x= stoi(s1);
    //      cout<<x+2;

    //12.   int x = 999;
    //      cout << to_string(x) + "2";


    //sort string 
    string s = "ahgsfuhgfh";
    sort(s.begin(), s.end());
    cout<<s;

    return 0;
}