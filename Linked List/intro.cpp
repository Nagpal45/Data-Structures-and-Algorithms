//Array -> Single block of memory with partitions

//Linked List -> Multiple blocks of memory linked to each other 
//This block of meomory is called node. Int contains two elements data and next.Next stores address of next node.

//Head pointer stores the address of first node.

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while ((temp->next)!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;  
}

void insertAtHead(node* &head, int val){
    node *n =new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node*temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp =temp->next;
    }
    return false;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,2);
    cout<<search(head,5);
    return 0;
}