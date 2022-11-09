#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll search(vector<ll>& nums, ll target) {
    ll n = nums.size();
    if(n==0) return -1;
    ll l =0, r = n-1;
    ll first = nums[0];
    while(l<=r){
        ll mid = l + (r-l)/2;
        ll val = nums[mid];
        if(val == target) return mid;
        
        bool am_big = val >= first;
        bool target_big = target >= first;
        
        if(am_big == target_big){
            if(val < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }else{
            if(am_big){
                l = mid + 1;
            }else
                r = mid - 1;
        }
    }
    return -1;
}


main(){}