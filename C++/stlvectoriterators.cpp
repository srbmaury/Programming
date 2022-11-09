#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0; i<=9; i++) v1.push_back(10*(i+1));
    for(int i=0; i<v1.size(); i++) cout<<v1[i]<<" ";
    cout<<"\n";
    vector<int>::iterator it=v1.begin();
    v1.insert(it+3,35);
    for(int i=0; i<v1.size(); i++) cout<<v1[i]<<" ";
}