/************************I N S E R T I O N ********************************************/
/* DECLARING HEAD AS GLOBAL VARIABLE*/
/*
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head= NULL;

// Function to insert a Node at end
void Insert(int x){
    Node* temp=new Node(), *temp2;
    temp->data=x;
    if(temp==NULL) exit(0);
    if(head==NULL){
        head=temp;
    }
    else{
        temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
        temp->next=NULL;
    }
}

// Function to insert a Node at beginning
void insert(int x){
    Node *p=new Node();
    p->data=x;
    p->next=head;
    head=p;
}
// Function to insert after n nodes
void insertn(int x, int n){
    Node *p=head,*q=new Node();
     q->data=x; q->next=NULL;
    for(int i=0; i<n-1; i++) p=p->next;
    q->next=p->next;
    p->next=q;
}
// Function to insert after x if found
void insertx(int x, int y){
    Node *q=new Node(),*r=head; q->data=y;
    while(r->next !=NULL){
        if(r->data==x){
            q->next=r->next;
            r->next=q;
            return;
        }
        r=r->next;
    }
    return;
}
// Function to print the list
void Print(){
    Node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    Insert(4);
    Insert(1);
    Insert(34);
    Insert(40);
    Insert(234);
    Insert(402);
    insertn(9,2);
    Print(); cout<<"\n";
    insertx(9,56);
    Print();
}
*/
/* DECLARING HEAD AS LOCAL VARIABLE*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head= NULL;

// Function to insert a Node at end
void Insert(int x, Node** head){
    Node* temp=new Node(), *temp2;
    temp->data=x;
    if(temp==NULL) exit(0);
    if(*head==NULL){
        *head=temp;
    }
    else{
        temp2=*head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
        temp->next=NULL;
    }
}

// Function to insert a Node at beginning
void insert(int x, Node** head){
    Node *p=new Node();
    p->data=x;
    p->next=*head;
    *head=p;
}
// Function to insert after n nodes
void insertn(int x, int n, Node **head){
    Node *p=*head,*q=new Node();
     q->data=x; q->next=NULL;
    for(int i=0; i<n-1; i++) p=p->next;
    q->next=p->next;
    p->next=q;
}
// Function to insert after x if found
void insertx(int x, int y, Node** head){
    Node *q=new Node(),*r=*head; q->data=y;
    while(r->next !=NULL){
        if(r->data==x){
            q->next=r->next;
            r->next=q;
            return;
        }
        r=r->next;
    }
    return;
}
// Function to print the list
void Print(Node* head){
    Node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    Node* head=NULL;
    Insert(4,&head);
    Insert(1, &head);
    Insert(34, &head);
    Insert(40, &head);
    Insert(234, &head);
    Insert(402, &head);
    insertn(9,2, &head);
    Print(head); cout<<"\n";
    insertx(9,56, &head);
    Print(head);
}