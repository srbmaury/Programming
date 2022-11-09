#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string s1="Hello ";        //string 
    char str[]="Students";     //char array
    string s2;
    s2=s1+str;
    s2=s1+'a';      //string + character
    s2.assign("Hello");
    s2.append(" Students");     //s1+="Students" is also same
    // s1.insert(2,"123");
    cout<<s1<<" "<<s2;
    s1.replace(2,2,"A");     //starting index,length
    // s1.erase();     erse all data in s1
    s2.assign("Hello online online students");
    int in=s2.find("online");   //if not found returns -1
    int io=s2.rfind("online");   //if not found returns -1 (reverse)
    int cmp=s1.compare(s2);
    cout<<"\n"<<s1<<" "<<s2<<" "<<in<<" "<<io<<" "<<cmp;
    


    string s="Hello";
    char str2[20];
    strcpy(str2,s.c_str());
    int x=s1.size();
    cout<<"\n"<<str2<<" "<<x;

}