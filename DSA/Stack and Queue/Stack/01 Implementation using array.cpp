// Stack as abstract data type
// LIFO : Last-In-First-Out
// Insertion and deletion only from one end called as top of the stack
// Push(X): Insertion
// Pop()  : Removal
// Top()  : Returns top element
//IsEmpty()
// All these four operatiins can be performed in constant time i.e., their complexity is O(1)


#include<iostream>
#define MAX_SIZE 101
using namespace std;
int A[MAX_SIZE];
int top=-1;
void Push(int x){
    if(top == MAX_SIZE-1){
        cout<<"Error: stack overflow\n";
        return;
    }
    A[++top] = x;
}
void Pop(){
    if(top == -1){
        cout<<"Error: No element to pop\n";
        return;
    }
    top--;
}
int Top(){
    return A[top];
}
void Print(){
    int i;
    cout<<"Stack: ";
    for(i=0; i<=top; i++)
        cout<<A[i]<<" ";
    cout<<"\n";
}
void isEmpty(){
    if(top == -1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
int main(){
    isEmpty();
    Push(2); Print();
    isEmpty();
    Push(5); Print();
    isEmpty();
    Push(10); Print();
    isEmpty();
    Pop(); Print();
    isEmpty();
    Push(12); Print();
    isEmpty();
    Pop(); Print();
    isEmpty();
    Pop(); Print();
    isEmpty();
    Pop(); Print();
    isEmpty();
    return 0;
}