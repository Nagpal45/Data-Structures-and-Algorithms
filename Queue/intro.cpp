//Stores a list of items in which an item can be inserted at one end and removed from the other end only.

//FIFO

//Operations
//1. enqueue() -> insert element
//2. dequeue()-> remove value
//3. peek() -> front value
//4. empty() -> whether empty or not

#include <bits/stdc++.h>
using namespace std;
#define n 20 

class Queue{
    int *arr;
    int front;
    int back;

    public:
        Queue(){
            arr=new int[n];
            front=-1;
            back=-1;
        }

        void push(int x){
            if(back==n-1){
                cout<<"Queue overflow";
                return;
            }
            back++;
            arr[back]=x;

            if(front==-1){
                    front++;
            }
        }

        void pop(){
            if(front==-1 || front>back){
                cout<<"No elements in queue";
                return;
            }
            front++;
        }

        int peek(){
            if(front==-1 || front>back){
                cout<<"No elements in queue";
                return -1;
            }
            return arr[front];
        }

        bool empty(){
            if(front==-1 || front>back){
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
    cout<<q.peek()<<endl;
    q.pop();  
    cout<<q.peek()<<endl;
    q.pop();  
    cout<<q.peek()<<endl;
    q.pop();  
    cout<<q.peek()<<endl;
    q.pop();  
    cout<<q.empty()<<endl;
    return 0;
}