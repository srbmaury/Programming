#include <bits/stdc++.h>
using namespace std;
namespace MySpace{
    int a;
    int f1();
    class A{
        public:
            void fun1();
    };
}
int MySpace::f1(){
    std::cout<<"Hello f1";
    return 0;
}
void MySpace::A:: fun1(){
    cout<<"\nHello fun1";
}
// __int128_t;
namespace ms=MySpace;
using namespace ms;
namespace{     // unnamed namespaces

}
int main(){
    A o1;
    ms::a=5;
    f1();
    o1.fun1();
    return 0;
}