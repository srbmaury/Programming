/*

length[]   length[]
Price []   price[]
N          W

*/


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
int knapSack(int length[], int price[], int W, int n){
	// Base condition (smallest priceid input)
	if(n == 0 || W == 0) return 0;

	if(dp[n][W] != -1) return dp[n][W];
	// Choice diagram
	if(length[n-1]<=W)
		return dp[n][W]=max(price[n-1] + knapSack(length, price, W-length[n-1], n), 
			knapSack(length, price, W, n-1));
	else return dp[n][W]=knapSack(length, price, W, n-1);
}

int knapsack(int length[], int price[], int W, int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=W; j++){
			if(length[i-1]<=j)
				dp[i][j] = max(price[i-1]+dp[i][j-length[i-1]],
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
    int length[n], price[n];
    rep(i,0,n)cin>>length[i]>>price[i];
    cout<<knapsack(length,price,W,n);
}