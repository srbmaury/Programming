#include<iostream>
struct Node{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;
void Enqueue(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void Dequeue(){
    Node* temp=front;
    if(front==NULL) return;
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
}
int Front(){
    return front -> data;
}
int main(){
    Enqueue(1);
    Enqueue(4);
    Enqueue(5);
    Enqueue(7);
    Enqueue(10);

    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    return 0;
}