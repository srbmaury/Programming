// constructor is a member function of class having the same name as the name of class with no return type 
// it must be instance member function, it can never be static (can be called only by objects)
// constructer is implicitly invoked(we don't need to call it  it is called itself when an object is created)
// use to solve problem of innitialisation
/* Default constructor, parameterized constructor and constructor overloading*/
#include<bits/stdc++.h>   //you could use #include<iostream>
using namespace std;
class Complex
{
    private:
        int a, b;
    public:
        // Complex()
        // { cout<<"Hello Constructor\n";}
        Complex(int x, int y)     //parametrized constructors
        {a=x;b=y;}
        Complex(int k)
        {a=k;}
        // Complex()
        // {a=0;b=0;}
        Complex()            //default constructor
        {}
        //to make copy constructoor
        Complex(Complex &c)    //use reference variable not object variable
        {
            a = c.a;
            b =c.b;
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // Complex c1, c2, c3;
    Complex c1 =  (2,5), c2(5), c3, c4(3,4);   // for two arguments two ways
    Complex c5=5;                                             // for single argument 3rd way
    Complex c6=c1, c7(c1);              //passing one complex argument nor error  (runs on compiler copy constructor)

    /*OBJECT BANEGA TO CONSTRUCTOR TO CALL HOGA HI HOGA (if we don't make any compiler makes one in object file not in source file)*/
    
    return 0;
}