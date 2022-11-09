// Singly circular linked list

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* head=NULL;
void insertAtEnd(){
    Node* newNode=new Node();
    int x;
    scanf("%d",&x);
    newNode->data=x;
    if(head==NULL){
        head=newNode;
        head->next=newNode;
        return;
    }
    Node* temp;
    temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void insertAtStart(){
    Node* newNode=new Node();
    int x;
    scanf("%d",&x);
    newNode->data=x;
    if(head==NULL){
        head=newNode;
        head->next=newNode;
        return;
    }
    Node* temp;
    temp=head;
    newNode->next=head;
    do{
        temp=temp->next;
    }while(temp->next != head);
    temp->next=newNode;
    head=newNode;
}
void deletefromEnd(){
    Node* temp=head;
    if(head==NULL){
        printf("List is empty\n"); return;
    }
    if(temp->next == head){
        head=NULL;
        free(temp);
        return;
    }
    struct Node* temp2;
    while(temp->next != head){
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=head;
    free(temp);
}
void deletefromStart(){
    Node* temp=head;
    if(head==NULL){
        printf("List is empty\n"); return;
    }
    if(temp->next == head){
        head=NULL;
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
    cout<<"Length of the list is "<<l<<"\n";
}
void isEmpty(){
    if(head==NULL)
        cout<<"The list is empty\n";
    else
        cout<<"The list is not empty\n";
}
int main(){
    printf("Press 1 to Insert at beginning\n");
    printf("Press 2 to Delete from beginning\n");
    printf("Press 3 to Insert at end\n");
    printf("Press 4 to Delete from end\n");
    printf("Press 5 to Display the list\n");
    printf("Press 6 to find the length of the list\n");
    printf("Press 7 to check if the list is empty or not\n");
    printf("Press 8 to exit\n");
    int choice;
    while(true){
        scanf("%d", &choice);
        switch(choice){
        case 1:
            insertAtStart();
            break;
        case 2:
            deletefromStart();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            deletefromEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            length();
            break;
        case 7:
            isEmpty();
            break;
        case 8:
            exit(1);
        default:
            printf("Invalid Key\n");
        }
    }
}