// List class supports bidirectional linear list
// Vector supports random access but a list can be accessed sequentially only
// List can be accessed front to back or back to front
/* IMPORTANT FUNCTIONS
sort()
size()
push_back()
push_front()
pop_back()
pop_front()
reverse()
remove()
clear()        */
#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l1;
    list <int> l2{22,11,33};
    list <string> l3{"Rohan", "Mohan","Chinki","Pinki"};
    
    // cout<<l1[0];    this syntax is invalid in lists
    list<int>::iterator p=l2.begin();     //p is a pointer
    while(p!=l2.end()){ cout<<*p<<" "; p++; }
    cout<<"\n"<<l2.size()<<"\n";
    l2.sort();
    list<int>::iterator p2=l2.begin();     //p is a pointer
    while(p2!=l2.end()){ cout<<*p2<<" "; p2++; }
    l3.push_back("Mahi");
    l3.push_front("Dhaniya");
    l3.reverse();
    l3.remove("Pinki");
    list<string>::iterator p3=l3.begin();     //p is a pointer
    while(p3!=l3.end()){ cout<<*p3<<" "; p3++; }
    l3.clear();
    cout<<"\n"<<l3.size();
}
