// Class type to primitive type

#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {a=x; b=y;}
        void showData()
        {cout<<"a="<<a<<" b="<<b;}
        operator int()
        {
            return a;
        }
};
int main(){
    // Complex c1(4); //without this 4 there will be error if there is no default constructor made exclusively
    Complex c1; 
    c1.setData(3,4);
    c1.showData();
    int x;
    x=c1;     // can be done by casting operator
    cout<<"\n"<<x;
    return 0;
}