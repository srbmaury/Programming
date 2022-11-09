// Base pointer can point to the object of derived class

#include <bits/stdc++.h>
using namespace std;
class A{
        int a;
    public: 
        void f1();
        virtual ~A(){ }
};
class B:public A{
        int b;
    public:
        void f2();
        ~B(){ }    // by default virtual due to line 9

};
int fun();
int fun(){
    // B *p=new B;
    A *p=new B;     // it is correct but can invoke only members of A
    p->f1();        // corect
    // p->f2();     // incorrect
    delete p;
}
int main(){
    
    return 0;
}