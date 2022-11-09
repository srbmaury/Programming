/* types of inheritence *//*
1. Single Inheritence
2. Multilevel Inheritence
3. Multiple Inheritence
4. Hirarchical Inheritence
5. Hybrid Inheritence                               */

// Single Inheritence
class A
{
};
class B:public A
{
};

// Multilevel Inheritence
class A
{
};
class B:public A
{
};
class C:public B
{
};

//Multiple Inheritence
class A1
{
};
class A2
{
};
class B:public A1,public A2    //more than 1 parent class
{
};

//Hirarchical Inheritence
class A
{
};
class B1:public A
{
};
class B2:public A
{
};

//Hybrid Inheritence 
class A
{
};
class B1:public /*if not mentioned considered as private*/ A
{
};
class B2:public A
{
};

// Visibility modes( or access specifiers)
/* Private 
Protected
Public */
#include<bits/stdc++.h>
using namespace std;
class A{
    // protected: will be accesible in class B
    private:
        int a;
    protected:
    void setValue(int k)
    {a=k;}
};
class B: public A
{
    public:
    void setData(int x)
    {setValue(x);}
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    B obj;
    obj.setData(4);
    return 0;
}