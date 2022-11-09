// unary operator overloading as a friend function
#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
    void setData(int x, int y)
        {a=x; b=y;}
    void showData()
    {cout<<"a = "<<a<<" b = "<<b;}
        friend Complex operator -(Complex);
        /*  operator -(){
        Complex temp;
        temp.a=-a;  
        temp.b=-b;  
        return temp;    
    };   */  
    
};
Complex operator -(Complex c1){
        Complex temp;
        temp.a=-c1.a;  
        temp.b=-c1.b;  
        return temp;    
    };
int main()
{
    Complex c1, c2;
    c1.setData(3,4);
    c2=-c1;      //c2=operator-(c1)
    c2.showData();
    return 0;
}