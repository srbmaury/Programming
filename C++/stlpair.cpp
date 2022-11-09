// Pair is a template class in Standard Template Library
// Pair is not a part of container
// SYNTAX
// pair<T1,T2> pair1;
// pair <string,int> p1;
#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a)
        {name=s; age=a;}
        void showStudent()
        {cout<<"Name: "<<name<<"\nAge: "<<age;}
};
int main(){
    pair <string,int>p1;
    pair <string,string>p2;
    pair <string,float>p3={"C++", 6.0};
    pair <int,Student>p4;
    // Inserting value
    p1=make_pair("Rahul", 16);
    p2=make_pair("India", "New Delhi");
    // p3=make_pair("Drilling C++", 345.5f);
    Student s1;
    s1.setStudent("Aishwarya", 19);
    p4=make_pair(1,s1);
    cout<<p1.first<<" "<<p1.second<<"\n";
    cout<<p2.first<<" "<<p2.second<<"\n";
    cout<<p3.first<<" "<<p3.second<<"\n";
    cout<<p4.first<<"\n";
    Student s2=p4.second;
    s2.showStudent();
}
// Compare two pairs
//                                     == != < > <= >=
