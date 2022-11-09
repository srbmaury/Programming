// try catch and throw keywords
// try{

// }
// catch(type 1 arg){
    
// }
// catch(type 2 arg){

// }
// catch(type N arg){

// }



#include <bits/stdc++.h>
using namespace std;
// int main(){
//     cout<<"Welcome";
//     try{
//         throw 10;                  // throw; is illegal
//         cout<<"\nIn Try";
//     }
//     catch(double e){
//         cout<<"\nException no: "<<e;
//     }
//     catch(int e){
//         cout<<"\nException no: "<<2*e;
//     }
//     catch(int){
//         cout<<"\nException no: ";
//     }
//     cout<<"\nLast Line";
//     return 0;
// }
void fun()
{
    throw "hello";
}
int main(){
    int i=2;
    cout<<"Welcome";
    try{
        if(i==1)
            throw 1;
        if(i==2)
            fun();
        if(i==3)
            throw 4.5;
        cout<<"\nIn Try";
    }
    catch(...){            //can handle any situation
        cout<<"\nException no: "/*<<e*/;   // e not accesible
    }
    // catch(char const* s){                  // so this will give error
    //     cout<<"\nException no: "<<s;
    // }
    cout<<"\nLast Line";
    return 0;
}