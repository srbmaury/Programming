// Primitive type to class type

#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        Complex(){ }      // default constructor
        Complex(int k)
        { a=k; b=0; }
        void setData(int x, int y)
        {a=x; b=y;}
        void showData()
        {cout<<"a="<<a<<" b="<<b;}
};
int main(){
    // Complex c1(4); //without this 4 there will be error if there is no default constructor made exclusively
    Complex c1; 
    int x=5;
    c1=x;
    c1.showData();
    return 0;
}