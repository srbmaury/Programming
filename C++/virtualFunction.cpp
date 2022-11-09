// Solves problem in function overriding
// Base class pointer can point to the object of any of its descendant class
// But its converse is not true

#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
        virtual void f1(){ }
};
class B:public A
{
    public:
        void f1(){ }       //function overriding
        void f2(){ }
};
int main()
{
    A *p,o1;
    B o2,*q;
    p=&o1;
    p=&o2;
    // q=&o1;     it is wrong
    q=&o2;
    o2.f1();   // B
    (*p).f1();   // A if virtual keyword was not written
    p->f1();     // A if virtual keyword was not written
    // avoid early binding and do late binding



    return 0;
}