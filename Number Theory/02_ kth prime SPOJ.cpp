#include <bits/stdc++.h>
using namespace std;

bool isPrime[90000001];
vector<int>prime;
void seive(){
    int N = 90000000;
    isPrime[0]=isPrime[1]=true;
    for(int i=2; i*i<=N; i++){
        if(!isPrime[i]){
            for(int j=i*i; j<=N; j+=i){
                isPrime[j] = true;
            }
        }
    }
    for(int i=2; i<=N; i++) 
        if(!isPrime[i]) prime.push_back(i); //prime.size(5216954) > 5e6
}
void solve(){
    int k; cin>>k; cout<<prime[k-1];
}
signed main(){
    seive();
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long T; cin>>T; while(T--)
    solve(), cout<<'\n';
    return 0;
}