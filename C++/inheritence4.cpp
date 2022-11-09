// Constructor and Destructor in Inheritence in C++
// Constructor is invoked implicitily when an object is created
// In Inheritence, when we create object of derived class, wha will happen?

//Constructor and destructor
class A
{   int a;
    public:
    A(int k)
    { k=a;}
    ~A()
    { }
};
class B:public A
{
    int b;
    public:
    // B()   it is wrong
    // B():A()  it is wrong
    B(int x, int y):A(x)
    {b=y;}
    ~B()
    { }
    
};
int main()
{
    B obj(2,3);
}