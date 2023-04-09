#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll dp[100][181][2];
ll solve(string num, ll n, int x, bool tight){
	if(x < 0) return 0;
	if(n == 1){
		return (x >= 0 && x <= 9);
	}
	if(dp[n][x][tight] != -1) return dp[n][x][tight];
	ll ub = tight ? (num[num.size() - n] - '0') : 9;
	ll ans = 0;
	for(ll dig = 0; dig <= ub; dig++){
		ans += solve(num, n-1, x-dig,  tight&&(dig == ub));
	}
	return dp[n][x][tight] = ans;
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	// count  numbers in range [0,R] which obey function f(x)
	// find the count of numbers between L and R which have a sum of digits = X
	// 1 <= L <= R <= 10^18
	// 1 <= x <= 180

	// dp[N,X,1] = dp[N-1, x, 0] + dp[N-1, x-1, 0] + .. + dp[N-1, x-5, 1]
	// n = log10(R)+1; (number of digits in R)
	// TC O(10*X*Log(R))
	string R; cin>>R;
	int x; cin>>x;
	memset(dp, -1, sizeof(dp));
	cout<<solve(R, R.size(), x, 1);
    return 0;
}