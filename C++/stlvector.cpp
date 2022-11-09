#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v1;              // creates blank vector(with 0 size)
    vector <int>v2{10,20,30,40,50};
    vector<string> v3{"Saurabh", "Maurya"};
    vector<char>v4(5);           //creates a 5 element character vector
    vector<string>v5(4,"hello");       // initializes 4 element char vector with "hello"
    // Relational Operators : == != > < >= <=
    // [ ]   subscript operator 
    cout<<v5[0]<<" ";
    cout<<v5[1]<<" ";
    cout<<v5[2]<<"\n";
    for(int i=0; i<5; i++) cout<<v2[i]<<" ";
    cout<<"\n"<<v1.capacity();       // 0
    // To insert value
    v1.push_back(10);
    cout<<"\n"<<v1.capacity();       // 1
    v1.push_back(20);
    cout<<"\n"<<v1.capacity();       // 2
    v1.push_back(30);
    cout<<"\n"<<v1.capacity();       // 4
for(int i=0; i<v1.capacity()-1; i++) cout<<"\n"<<v1[i];// As capacity is 4 but only 3 elements v1[3]=0 by default
    v1.pop_back();
    cout<<"\n"<<v1.capacity();       // Capacity does not reduce on popping
    cout<<"\n"<<v1.size();
    v1.clear();                   // removes all elements
    cout<<"\n"<<v1.capacity();       // Capacity does not reduce on popping
    cout<<"\n"<<v1.size();
    // at(i) returns element at ith index
    cout<<"\n"<<v5[1]<<" "<<v5.at(1);
    // front() returns first element of the vector
    // back() returns last element of the vector
    cout<<"\nfirst value is: "<<v3.front()<<" "<<"Last value is: "<<v3.back();
    
}