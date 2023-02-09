#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    // stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
        cout<<x<<endl;
    }
    int pop(){
        // if(s1.empty() && s2.empty()){
        //     cout<<"Queue is empty";
        //     return -1;
        // }
        // if(s2.empty()){
        //     while(!s1.empty()){
        //         s2.push(s1.top());
        //         s1.pop();
        //     }
        // }
        // int topval= s2.top();
        // s2.pop();
        // return topval;

        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x= s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }

    bool empty(){
        // if(s1.empty() && s2.empty()){
        //     return true;
        // }
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(1);   
    q.push(2);   
    q.push(3);   
    q.push(4);
    q.pop();  
    q.pop();  
    q.pop();  
    q.pop();
    q.pop();
     
    cout<<q.empty()<<endl;
    return 0;
}

//Commented parts are of method 1(Using two stacks) which is not as optimized as method 2(Only one stack)