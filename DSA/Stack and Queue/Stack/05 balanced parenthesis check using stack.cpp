// Check for balanced parantheses
#include<iostream>
#include<string>
#include<string.h>
#define MAX_SIZE 101
using namespace std;
char A[MAX_SIZE];
int top=-1;
void Push(char x){
    A[++top] = x;
}
void Pop(){
    if(top == -1){
        cout<<"Error: No element to pop\n";
        return;
    }
    top--;
}
char Top(){
    return A[top];
}
bool isEmpty(){
    if(top == -1)
        return true;
    else
        return false;
}
char opp(char x){
    if(x==')') return '(';
    else if(x==']') return '[';
    else if(x=='}') return '{';
    return 0;
}
bool checkBalancedParanthesis(char* exp){
    int n=strlen(exp);
    for(int i=0; i<n; i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        Push(exp[i]);
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isEmpty() || Top() != opp(exp[i]))
                return false;
            else
                Pop();
        }
        
    }
    return isEmpty() ? true: false; 
}
int main(){
    // char st[]="(((tj(({[hnfdhhus[()iiojdk]]})))))";
    char st[]="[}{{}}";
    if(checkBalancedParanthesis(st)) printf("Yes"); else printf("No");
    return 0;
}
