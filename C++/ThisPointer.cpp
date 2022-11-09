// Object pointer  -- contains adress of an object
#include<bits/stdc++.h>
using namespace std;
class Box
{
    private:
        int l, b, h;
    public:
        // void setDimensions(int x, int y, int z)
        // {
        //     l=x; b=y; h=z;
        // }
        void setDimensions(int l, int b, int h)
        {
            this->l=l; this->b=b; this->h=h;
        }
        void showDimension()
        {
            cout<<"l="<<l<<" b="<<b<<" h="<<h;
        }
};
int main()
{
    Box *p, smallBox;
    p=&smallBox;
    (*p).setDimensions(1,2,3);
    (*p).showDimension();
    cout<<"\n";
    
    p->setDimensions(1,2,3);
    p->showDimension();
    cout<<"\n";

    smallBox.setDimensions(12,10,15);
    smallBox.showDimension();

    return 0;
}

// This pointer
// This is a local object pointer in every instance member function containing address of the caller object
// This pointer can not be modified
// It is used to refer caller object in member function
// "This" is a keyword in C++
