/*
ios::in              input/read
ios::out             output/write
ios::app             append
ios::ate             update
ios::binary          binary
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout;
    fout.open("myfile.dat",ios::out);   // defaults argument
    fout.open("myfile.dat",ios::app);   // defaults argument
    return 0;
}