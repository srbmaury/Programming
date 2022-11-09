// TEMPLATE
// The keyword tempelate is used to define function tempelate and class tempelate
// It is a way to make our function or class generalize as far as data type is concern
// Function tempelate
// function template is also known as generic function
// SYNTAX :    template <class type> type func_name(type, arg1,....)

#include<bits/stdc++.h>
using namespace std;
template <class X,class Y>
X big(X a, Y b){
    if(a>b) return a; else return b;
};
int main(){
    cout<<big(4,5);
    cout<<big(5.6,3.4);
    return 0;
}

// class template is also known as generic class
// SYNTAX :     template <class type> class class_name{...};

