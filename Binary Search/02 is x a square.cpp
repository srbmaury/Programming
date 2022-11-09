#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll isXsquare(ll target){
	ll l=0, r = target;
	while(l<=r){
		ll mid = l + (r-l)/2;
		if(mid * mid == target) return mid;
		if(mid * mid < target) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

main(){}