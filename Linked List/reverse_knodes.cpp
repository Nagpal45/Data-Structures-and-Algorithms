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

void insert(node* &head, int val){
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

node* reversek(node* &head, int k){
    node*prevptr=NULL;
    node* currptr = head;
    node*nextptr;
    int count =0;

    while(currptr!=NULL && count<k){
        nextptr= currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count ++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    int k=2;
    node*newhead=reversek(head,2);
    display(newhead);

    return 0;
}