// Overloading of insertion and extraction operators
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
    friend ostream& operator <<(ostream&,Complex);
    friend istream& operator >>(istream&,Complex&);
};
ostream& operator <<(ostream &dout,Complex C){
        cout<<"a="<<C.a<<" b="<<C.b;
        // return (cout);
        return (dout);
    };
istream& operator >>(istream &din,Complex &C){
        cin>>C.a>>C.b;
        // return(cin);
        return(din);
    };
int main()
{
    Complex c1;
    cout<<"Enter a complex number: ";
    // cin.operator>>(c1);
    cin>>c1;
    cout<<"You entered ";
    // operator<<(cout,c1);
    cout<<c1;
    return 0;
}