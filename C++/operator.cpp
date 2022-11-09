// operator overloading: When an operator is overloaded with multiple jobs, it is known as operator overloading
// it is a way to implement compile time polymorphism
// we can't overload sizeof and ?: operators

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y)
//     { a=x; b=y;}
//     void showData()
//     {
//         cout<<"a="<<a<<" b="<<b;
//     }
//     Complex operator+(Complex c)
//     {
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return temp;
//     }
// };
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     Complex c1, c2, c3;
//     c1.setData(3,4);
//     c2.setData(5,6);
//     // c3=c1.operator+(c2);
//     c3=c1+c2;
//     c3.showData();

//     return 0;
// }

// overloading unary operators
// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y)
//     { a=x; b=y;}
//     void showData()
//     {
//         cout<<"a="<<a<<" b="<<b;
//     }
//     Complex operator-(){
//         Complex temp;
//         temp.a=-a;
//         temp.b=-b;
//         return temp;
//     }
// };
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     Complex c1, c2;
//     c1.setData(3,4);
//     // c2=c1.operator-();
//     c2=-c1;
//     c2.showData();

//     return 0;
// }

//overloading increment operator
#include <bits/stdc++.h>
using namespace std;
class integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << "x=" << x;
    }
    integer operator++()
    {
        integer temp;
        temp.x = ++x;
        return temp;
    }
    integer operator++(int)
    {
        integer temp;
        temp.x = x++;
        return temp;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    integer i1, i2;
    i1.setData(3);
    i1.showData();
    // i2=i1.operator++();
    /* i2 = ++i1;
    i1.showData();
    i2.showData();   */
    i2 = i1++;
    i1.showData();
    i2.showData();

    return 0;
}