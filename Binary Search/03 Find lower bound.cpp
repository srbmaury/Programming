#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll binarySearch(vector<ll>a, ll target, ll n){
	ll l=0, r = n-1, ans = -1;
	while(l<=r){
		ll mid = l + (r-l)/2;
		if(a[mid] >= target){
			ans = mid;
			r = mid - 1;
		}
		else 
			l = mid + 1;
	}
	return ans;
}

main(){}