// Constructor :: member function of class having name same as class, has no return type, instance member function
#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        complex(int x=0, int y=0)
        {
            std::cout<<"HI";
            a=x; b=y;
            cout<<a<<b<<"\n";
        };
        
};
int main(){
    complex c1(3,4), c2(5), c3;
    complex c4=complex(9,8), c5=6;
}