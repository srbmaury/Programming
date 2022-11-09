// Deep copy and Shallow copy
#include<iostream>
using namespace std;
class Dummy{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {a=x; b=y;}
        void showData()
        { cout<<"a="<<a<<" b="<<b;}
        // we can make copy constructor
        Dummy(Dummy &d)   // pass by reference
        {a=d.a; b=d.b;}
};
int main(){
    Dummy d1;
    int a,b;
    cin>>a>>b;
    d1.setData(a,b);
    /*Dummy  d2;         // Implicit copy assignment operator is called
    d2=d1; */ 
    Dummy d2=d1;      // it is shallow   // copy constructor(made by compiler by default)  is called
    d2.showData();
}
// two ways of copying by calling
// 1.Copy constructor
// 2. Implicit copy assignment operator
