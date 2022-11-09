// reverse a string 
// reverse a linked list
// TIme complexity O(n)
// Space complexity O(n)
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
// class Stack{
//     private:
//         char A[101];
//         int top;
//     public:
//         void Push(int x);
//         void Pop();
//         int Top();
//         bool isEmptuy();
// }
void Reverse(char *C, int n){
    stack <char> S;
    // loop for push
    for(int i=0; i<n; i++)
    S.push(C[i]);
    // loop for pop
    for(int i=0; i<n; i++)
    {
        C[i]=S.top();
        S.pop();
    }
}
int main(){
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C,strlen(C));
    cout<<C;
}