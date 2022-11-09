// Just like in pair we can pair two heterogeneous objects, in tuple we can pair multiple objects
// tuple<T1,T2,T3> tuple1;
// tuple<string,int,int> t1;
// Inserting Value
// t1=make_tuple("India",16,10);
// Accessing elements
/*  cout<<get<0>(t1);
    cout<<get<1>(t1);
    cout<<get<2>(t1);     */
#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple <string,int,int,float> t1;
    int a=4;
    t1=make_tuple("India",a,10,2.3);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";
    cout<<get<3>(t1)<<" ";
}
