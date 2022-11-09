// member function of one class can be friend of another class
#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void fun()
    {       }
    void foo()
    {       }
};
class B
{
    // friend void fun();   not member of any class
    // friend void A::fun();    //correct 
    // friend void A::foo();    //correct
    friend class A;        //all functions of class A are friend functions of clasas B (class A is friend of class B)
};
void fun()
{

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}
