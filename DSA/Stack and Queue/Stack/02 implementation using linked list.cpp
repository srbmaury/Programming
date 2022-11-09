// Insert / Delete at the end O(n)        (not suitable as stack implementation has complexity O(1))
// Insert / Delete at the start O(1)
// head == top

#include<bits/stdc++.h>
struct Node{
    int data; 
    Node* link;
};
Node* top=NULL;
void Push(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->link=top;
    top=temp;
}
void Pop(){
    Node *temp;
    if(top == NULL) 
        return;
    temp=top;
    top=top->link;
    free(temp);
}
int Top(){
    return top->data;
}
void isEmpty(){
    if(top == NULL)
        std::cout<<"Yes\n";
    else
        std::cout<<"No\n";
}
void Print(){
    Node *temp = top;
    std::cout<<"Stack: ";
    while(temp != NULL){
        std::cout<<temp->data<<' ';
        temp = temp->link;
    }
    std::cout<<'\n';
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
