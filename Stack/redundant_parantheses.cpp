#include <bits/stdc++.h>
using namespace std;

//If the expression contains extra parantheses or not

bool redundant(string s){
    stack<char> st;
    bool ans= false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout << redundant(s);
    return 0;
}