#include <bits/stdc++.h>
using namespace std;

int main(){
    // lambda functions
    cout<<[](int x){return x+2;}(2)<<endl;
    cout<<[](int x, int y){return x+y;}(2,3)<<endl;

    auto sum = [](int x, int y){return x+y;};
    cout<<sum(9,3)<<endl;

    vector<int>v={2,3,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x > 0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x > 0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x > 0;})<<endl;

    return 0;
}