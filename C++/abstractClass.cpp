// A do nothing function is pure virtual function
// class in which atleast one pure virtual function is present
// Generilastion
// person: Student Faculty

#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    virtual void fun()=0;          //fuction with no definition 
    void f1(){
        
    };
};
//cannot make object of Person class
class Student:public Person{
    //compulsary to overrride ( if child class is made)
    // virtual void fun()=0;   or
    void fun(){

    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}
