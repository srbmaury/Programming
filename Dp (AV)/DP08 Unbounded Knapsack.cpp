/* 
	Unbounded Knapsack
	Rod Cutting 
	Coin Change I
	Coin Change II
	Maximum Ribbon Cut
*/

#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;

const int N=100, M = 100000;
int dp[N+2][M+2];
int knapSack(int wt[], int val[], int W, int n){
	// Base condition (smallest valid input)
	if(n == 0 || W == 0) return 0;

	if(dp[n][W] != -1) return dp[n][W];
	// Choice diagram
	if(wt[n-1]<=W)
		return dp[n][W]=max(val[n-1] + knapSack(wt, val, W-wt[n-1], n), 
			knapSack(wt, val, W, n-1));
	else return dp[n][W]=knapSack(wt, val, W, n-1);
}

int knapsack(int wt[], int val[], int W, int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=W; j++){
			if(wt[i-1]<=j)
				dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]],
					dp[i-1][j]);
			else dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][W];
}

signed main(){
    memset(dp,-1,sizeof(dp));
    int n,W;
    cin>>n>>W;
    int wt[n], val[n];
    rep(i,0,n)cin>>wt[i]>>val[i];
    cout<<knapsack(wt,val,W,n);
}