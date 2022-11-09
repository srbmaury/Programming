//destructurer instance member function
#include<bits/stdc++.h>   //you could use #include<iostream>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
     ~Complex()               // destructur can never be static and has no return type, does not take any argument
     {cout<<"Destructor";}

};
void fun(){
    Complex obj;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fun();
    
    return 0;
}