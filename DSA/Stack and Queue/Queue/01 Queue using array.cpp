// Queue ADT
// First-In-First-Out
// front or head      rear or tail
// EnQueue(x) or Push(x)
// Dequeue(x) or Pop(x)
// front()  or Peek()
// IsEmpty()
// an element must be added at rear side and must be removed from front side
// void Enqueue(int x);
// int Dequeue();

// Circular array   Current position=i   Next position=(i+1)%N  previous position=(i+N-1)%N

#include<iostream>
using namespace std;
int A[10];
int front = -1;
int rear = -1;
bool isEmpty(){
    if(front == -1 && rear == -1)
        return true;
    else    
        return false;
}
void EnQueue(int x){
    if((rear+1)%10==front)
        return;
    else if(isEmpty())
    {
        front=0;
        rear=0;
        A[rear]=x;
    }
    else{
        rear=(rear+1)%10;
        A[rear]=x;
    }
}
void Dequeue(){
    if(isEmpty())
        return;
    else if(front == rear)
    {
        front=-1;
        rear=-1;
    }
    else 
        front=front+1;
}
int Front(){
    return A[front];
}
int main(){
    

    return 0;
}