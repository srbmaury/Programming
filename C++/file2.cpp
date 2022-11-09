// read and output contents of file
#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin;   //for input
    char ch;
    fin.open("myfile.dat");  ///to open a file
    // fin>>ch; // this does not return space newline or tab
    ch=fin.get();
    while(!fin.eof()){
        cout<<ch;
        // fin>>ch;
        ch=fin.get();
    }
    fin.close();
    return 0;
}