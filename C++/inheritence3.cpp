// Is a relationship
// Rectangle is a quadrilateral 
/* Association
    1. Aggregation
    2. Composition
    3. Inheritence    */

// "Is a relationship" is always implemented as a public inheritence

// #include<bits/stdc++.h>
// using namespace std;
// class Car
// {
//     private:
//         int gear;
//     public:
//         void incrementGear()
//     {
//         if(gear<5)
//         gear++;
//     }
// };
// class sportsCar:public Car
// {
    
// };
// int main()
// {

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Array
{
    private:
        int a[10];
    public:
        void insert(int index,int value)
        {a[index]=value;}
};
// class STACK: public Array   
class STACK: private Array
{
    int top;
    public:
    void push(int value)
    {
        insert(top,value);
    }
};
int main()
{
    STACK s1;
    s1.push(34);
    // s1.insert(2,56);    if line 44 is true
    
    return 0;
}