// Initializer List is used to initialize data members of a class.
// The list of members to be initialized is indicated with constructor as a comma seperated list followed by a colon 
#include<iostream>
using namespace std;
class Dummy{
    private:
        int a,b;
        const int x;     // it can only be initialized in list
        int &y;          // it must be initialized at the time of making
    public:
        // Dummy():a(5),b(6),x(9) // Initializer List
        Dummy(int &n):x(5),y(n)
        // {a=5;}
};
int main(){
    int m=6;
    Dummy d1(m);
}