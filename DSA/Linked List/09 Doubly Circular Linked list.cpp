// Doubly circular linked list

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
struct Node* head=NULL;
struct Node* tail=NULL;
void insertAtEnd(){
    Node* newNode=new Node();
    int x;
    scanf("%d",&x);
    newNode->data=x;
    if(head==NULL){
        head=tail=newNode;
        head->next=newNode;
        head->prev=newNode;
        return;
    }
    Node* temp;
    temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=head;
    head->prev=newNode;
}
void insertAtStart(){
    Node* newNode=new Node();
    int x;
    scanf("%d",&x);
    newNode->data=x;
    if(head==NULL){
        head=tail=newNode;
        head->next=newNode;
        head->prev=newNode;
        return;
    }
    Node* temp;
    temp=head;
    newNode->next=head;
    head->prev=newNode;
    do{
        temp=temp->next;
    }while(temp->next != head);
    temp->next=newNode;
    newNode->prev=temp;
    head=newNode;
}
void deletefromEnd(){
    Node* temp=head;
    if(head==NULL){
        printf("List is empty\n"); return;
    }
    if(temp->next == head){
        head=NULL;
        tail=NULL;
        free(temp);
        return;
    }
    struct Node* temp2;
    while(temp->next != head){
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=head;
    head->prev=temp2;
    free(temp);
}
void deletefromStart(){
    Node* temp=head;
    if(head==NULL){
        printf("List is empty\n"); return;
    }
    if(temp->next == head){
        head=NULL;
        tail=NULL;
        free(temp);
        return;
    }
    struct Node* temp2;
    while(temp->next != head){
        temp=temp->next;
    }
    temp2=head;
    temp->next=head->next;
    head=head->next;
    head->prev=temp;
    free(temp2);
}
void display(){
    Node* temp;
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!= head);
    printf("\n");
}
void displayBack(){
    Node* temp;
    if(tail==NULL){
        printf("List is empty\n");
        return;
    }
    temp=tail;
    do{
        printf("%d ",temp->data);
        temp=temp->prev;
    }while(temp!= tail);
    printf("\n");
}
void length(){
    Node* temp=head;
    int l=0;
    if(head==NULL){
        cout<<"List is empty\n"; return;
    }
    do{
        temp=temp->next;
        ++l;
    }while(temp != head);
    cout<<"Length of the list is "<<l;
}
void isEmpty(){
    if(head==NULL)
        cout<<"The list is empty\n";
    else
        cout<<"The list is not empty\n";
}
int main(){
    insertAtEnd(); display(); displayBack();
    insertAtStart(); display(); displayBack();
    insertAtEnd(); display(); displayBack();
    insertAtStart(); display(); displayBack();
    insertAtEnd(); display(); displayBack();
    insertAtStart(); display(); displayBack();
    deletefromEnd(); display(); displayBack();
    deletefromStart(); display(); displayBack();
}