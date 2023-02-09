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

int length(node* head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node*mergeRecursive(node* &head1, node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node*result;
    if(head1->data < head2->data){
        result = head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else{
        result = head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;
}

node*merge(node* &head1, node*&head2){
    node*p1 = head1;
    node*p2 = head2;
    node*dummyNode = new node(-1);
    node* p3 =dummyNode;

    while (p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next =p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next =p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next =p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
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
    node* head1=NULL;
    node*head2=NULL;
    insertAtTail(head1,1);  
    insertAtTail(head1,2);  
    insertAtTail(head1,3);  
    insertAtTail(head1,4);  
    insertAtTail(head1,5);  
    insertAtTail(head1,6);  
    insertAtTail(head2,9);  
    insertAtTail(head2,10);
    display(head1);  
    display(head2); 
    node* newhead = merge(head1,head2);
    display(newhead);
    return 0;
}