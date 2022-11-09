// tellg()  function
// defined in istream class
/* Its prototype is
-steampos tellg() */
// returns the position of the current character in the input stream


// tellp()  function
// defined in ostream class
/* Its prototype is
-steampos tellp() */
// returns the position of the current character in the output stream

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
    ifstream fin;
    fin.open("myfile.dat");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    getch();
    return 0;
}

// 20 to seekg and seekp