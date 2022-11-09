// Constructor can allocate dynamically created memory to the object
// Thus, object is going to use memory region, which is dynamically created by constructor
// MYTH: Constructor allocates memory for the object
// Student *p=new Student()
// Memory is allocated as soon as object is created before running constructor


// DYNAMIC CONSTRUCTOR

#include<iostream>
class A
{
    private:
        int a,b;
        int *p;
    public:
        A()
        {
            a=0; b=0;
        }
        A(int x, int y=0,int z=0){
            a=x;
            b=y;
            p=new int;
            *p=z;
        }
};
int main(){
    A o1,o2,o3(3,4,5),o4(5);

    return 0;
}