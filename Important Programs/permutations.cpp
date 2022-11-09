#include <bits/stdc++.h>
#define endl                    '\n'
#define vec                     vector<long long>
#define pb                      push_back
#define FAST                    ios_base::sync_with_stdio(false); \
                                cin.tie(0); cout.tie(0);
using namespace std;
vector<string>v;
void permuteString(string s, int l, int r){
    if(l==r) 
        v.push_back(s);
    else{
        for(int i=l; i<=r; i++){
            swap(s[l],s[i]);
            permuteString(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
vector<vec>res;
void permuteVec(vec v, int l, int r){
    if(l==r) 
        res.pb(v);
    else{
        for(int i=l; i<=r; i++){
            swap(v[l],v[i]);
            permuteVec(v,l+1,r);
            swap(v[l],v[i]);
        }
    }
}
int main(){
    FAST
    vec a={1,2,3};
    permuteString("abc",0,2);
    permuteVec(a,0,2);

    for(auto x:v){
        cout<<x<<endl;
    }
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}