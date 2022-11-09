#include<bits/stdc++.h>
using namespace std;
/*
Method Overloading
Method Overriding
Method Hiding
*/
class Car
{
    public:
    void shiftGear(){ }
    void f2(){ }
};
class sportsCar: public Car
{
    public:
    void shiftGear(){ }     // Method Overriding
    public:
    void f2(int x)
    { }              //Method Hiding
};

int main()
{
    sportsCar obj;
    obj.shiftGear();   //sportsCar   wala (child class) due to method overriding
    // obj.f2();    //sportsCar but arguments not matching so   error
    obj.f2(5);   //sportsCar
    //if there were no f2 in sportsCar class only then it would go to class A
    return 0;
}