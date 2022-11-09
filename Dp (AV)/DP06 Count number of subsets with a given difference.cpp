/*
 a[] = {1, 1, 2, 3}
 diff = 1
 O/p : 3 {{1, 1, 2}, {3}}, {{1, 2}, {1,3}},  {{1,2}, {1,3}}
*/

// s2 = (diff + sum_all) / 2

// count number of subsets with sum s2


#include<bits/stdc++.h>
using namespace std;
const int N=100,sum=100000;
int dp[N+2][sum+2];
 

int subsetSum(int a[], int n, int sum){
    if (sum == 0) return 1;
    if (n <= 0) return 0;
   
    if (dp[n][sum] != -1) return dp[n][sum];
   
    if (a[n - 1] <= sum)
    	return dp[n][sum] = subsetSum(a, n - 1, sum) +
                       subsetSum(a, n - 1, sum - a[n - 1]);
    return dp[n][sum] = subsetSum(a, n - 1, sum);
}

int subsetsum(int a[], int n, int sum){
	memset(dp, 0, sizeof(dp));
	for(int i=0;i<=n;i++) dp[i][0] = 1;
	for(int i=1;i<=sum;i++) dp[0][sum] = 0;

	for(int i=1; i<=n; i++){
		for(int j=0; j<=sum; j++){
			if(a[i-1]<=j)
				dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
			else dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main(){
	int n, d, sum = 0; cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i], sum += arr[i];

	sum = (d + sum)/2;
	memset(dp, -1, sizeof(dp));

	cout<<subsetsum(arr, n, sum)<<'\n';

}