// Maps are used to replicate associative arrays
// Maps contsin sorted key-value pair, in which each key is unique and cannot be changed, 
// and it can be inserted or deleted but cannot be altered 

// Numeric arrays: Index number to access values
// and Associative array 

// Maps always arrange its keys in sorted order
// In case the keys are of string type, they are sorted in dictionary order

/*  U S E F U L    F U N C T I O N S
at()
[]
size()
empty()
insert()
clear()     */

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>  customer;
    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[200]="Rajesh";
    customer[145]="Aditya";
    customer[171]="Shahid";

    map<int,string>  c{{100,"Gajendra"}, {123,"Dilip"}, {145,"Aditya"}, {171,"Shahid"},{200,"Rajesh"}};
    cout<<customer[100];
    cout<<customer[101]; // No error
    // Printing elements through iterators
    customer.insert(pair<int,string>(200,"Saurabh"));   //does not overwrite, no error
    customer.insert(pair<int,string>(250,"Saurabh"));
    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end()){ cout<<p->second<<" "; ++p;}
    cout<<"\n"<<customer.at(200)<<" "<<customer.size()<<" "<<customer.empty();

}