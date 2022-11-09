#include <bits/stdc++.h>
#define ll                      long long
using namespace std;

bool cmp(pair<ll,ll>&p1, pair<ll,ll>&p2){
    if(p1.first != p2.first) 
        return (p1.first < p2.first);
    return (p1.second > p2.second);
}

int main(){
    
    // Using lower bound in sorted array
    // int *ptr =  lower_bound(a,a+n,val);
    // // Using upper bound in sorted array
    // int *ptr =  upper_bound(a,a+n,val);

    // // Using lower bound in sorted vector
    // auto it = lower_bound(v.begin(),v.end(),val);
    // // Using upper bound in sorted vector
    // auto it = upper_bound(v.begin(),v.end(),val);

    // // Using upper and lower bound in sets
    // auto it = s.lower_bound(val);
    // auto it = s.upper_bound(val);

    // // Using upper and lower bound in maps
    // auto it = mp.lower_bound(val);
    // auto it = mp.upper_bound(val);

    vector<int>v={1,2,4,5,2,1};
    int minm = *min_element(v.begin(),v.end());
    int maxm = *max_element(v.begin(),v.end());

    int sum = accumulate(v.begin(),v.end(),0);
    int val = 2;
    int cnt = count(v.begin(),v.end(),val);
    cout<<cnt;

}