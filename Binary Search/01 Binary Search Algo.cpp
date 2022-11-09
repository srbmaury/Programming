#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll binarySearch(vector<ll>a, ll target, ll n){
	ll l=0, r = n-1;
	while(l<=r){
		ll mid = l + (r-l)/2;
		if(a[mid] == target) return mid;
		if(a[mid] < target) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

main(){}