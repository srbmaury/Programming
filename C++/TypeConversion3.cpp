// One class type to another class type
// two things can be done
// 1. Conversion through constructor
// 2. Conversion through casting operator
#include <bits/stdc++.h>
using namespace std;
class Product
{
    private:
        int m,n;
    public:
        void setData(int x, int y)
        {m=x; n=y;}
        int getM()
        {return(m);}
        int getN()
        {return(n);}
};
class Item
{
    private:
        int a,b;
    public:
        void showData()
        { cout<<"a="<<a<<" b="<<b; }
        Item(Product p)
        {a=p.getM(); b=p.getN();}
        Item()
        {       }

};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;  // constuctor for i1 or casting operator for p1
    i1.showData();
}