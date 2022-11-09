// friend function is not a member function of a class to which it is a friend
// friend function is declared in the class with friend keyword
// it must be defined outside the class
// can access any member of the class (but not directly)
// it has no caller object
// it should not be defined with membership label

#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        void setData(int x, int y){
            a=x;  b=y;
        }
        void showData(){
            cout<<"a="<<a<<" b="<<b<<"\n";
        }
        friend void fun(Complex);
};
void fun(Complex c){
    cout<<"sum is "<<c.a+c.b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Complex c1;
    c1.setData(2,3);
    fun(c1);
    
    return 0;
}
