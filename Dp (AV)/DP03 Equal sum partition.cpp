// to tell whether it is possible that the array can be divided in 
// two subarrays with equal sum 

// {1, 5, 11, 5}  Answer  YES {1, 5, 5} {11}


#include<bits/stdc++.h>
using namespace std;
const int N=100,sum=100000;
int dp[N+2][sum+2];


int subsetSum(int a[], int n, int sum){
    if (sum == 0) return 1;
    if (n <= 0) return 0;
   
    if (dp[n - 1][sum] != -1) return dp[n - 1][sum];
   
    if (a[n - 1] <= sum)
    	return dp[n - 1][sum] = subsetSum(a, n - 1, sum) ||
                       subsetSum(a, n - 1, sum - a[n - 1]);
    return dp[n - 1][sum] = subsetSum(a, n - 1, sum);
}

int subsetsum(int a[], int n, int sum){
	for(int i=0;i<=n;i++) dp[i][0] = 1;
	for(int i=1;i<=sum;i++) dp[0][sum] = 0;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=sum; j++){
			if(a[i-1]<=j)
				dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
			else dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main(){
	int n, sum = 0; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i], sum += arr[i];

	memset(dp, -1, sizeof(dp));

	(sum&1) ? cout<<"NO" : cout<<(subsetsum(arr, n, sum/2) ? "YES" : "NO");

}