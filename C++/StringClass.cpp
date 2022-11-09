// The string class is a specialization of a more general template class called basic_string
#include<iostream>
#include<string>      // container
using namespace std;
int main(){
    string s1;
    s1="Hello";                    // Assignment operator called
    string s2="Hello";             // Constructor called
    string s3("Hello");
    string s4=string("Hello");
    char str[]="Hello";
    string s5=str;
    string s6(str); 
    s6=s1+s2;
/*  =   Assignment 
    +   Concentration
    +=  Concentration aassignment
    ==  Equality
    !=  Inequality
    <   Less than
    <=  Less than or equal
    >   Greater than
    >=  Greater than or equal
    []  Subscripting                    */

    // string class supports many constrctors. A few of them are
    // string()
    // string(const char *str)
    // string(const string &str)

}