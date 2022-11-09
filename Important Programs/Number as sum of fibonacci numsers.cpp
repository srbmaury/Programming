#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    vector<long long>fib(93);
    fib[0]=0;
    fib[1]=1;

    for(long long i=2; i<=92;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    int n; cin>>n;

    string s(93,'0');


    int m = n;
    for(int i=92; i>=0; i--){
        if(fib[i] <= m){
            s[i] = '1';
            m-=fib[i];
            i--;
        }
        if(m==0) break;
    }
    cout<<n<<" = ";
    for(int i=0; i<=100; i++) if(s[i]=='1') cout<<fib[i]<<" + ";
}