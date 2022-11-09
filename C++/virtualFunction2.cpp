#include<iostream>
using namespace std;
class A
{
    // *_vptr;
    // static array of function pointer variables named vtable ( containing adresses of virtual functions) f2 f3 f4
    public:
    void f1(){ }
    virtual void f2(){ }
    virtual void f3(){ }
    virtual void f4(){ }
};
class B: public A
{
    // static array of function pointer variables named vtable f2(pointing to line 18) f3(pointing to line 10)
    // and f4 pointing to line 11 as f4 is not overridden but only hidden
    public:
    void f1(){ }
    void f2(){ }
    void f4(int x){ }
};

int main()
{/*
    A *p, o1;
    p=&o1;
    p->f1();  //EB
    p->f2();  //LB
    p->f3();  //LB
    p->f4();  //LB
    // p->f4(5); //EB   error  */
    
    // A *p;
    // B o2;
    // p=&o2;
    // p->f1();  //EB    //A
    // p->f2();  //LB    //B
    // p->f3();  //LB    //A
    // p->f4();  //LB    //A
    // p->f4(5); //EB    //A so error 

    return 0;
}