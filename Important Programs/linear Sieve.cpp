#include<bits/stdc++.h>
using namespace std;

const int N = 100000000;
vector<int> lp(N+1);
vector<int> pr;
void linear_sieve(){
    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    linear_sieve();
    int k=pr.size();
    
}