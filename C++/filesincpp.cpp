// #include<fstream.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    ofstream fout;
    fout.open("myfile.dat");
    getch();
    fout<<"hello";
    getch();
    fout.close();
    getch();
    return 0;
}