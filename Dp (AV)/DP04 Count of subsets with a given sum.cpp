/* 
   arr[] : 2 3 5 6 8 10
   sum   : 10
   count : 3 {2, 8}, {2, 3, 5}, {10}
*/

// Count subsets with a given sum
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
	int n, sum; cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	memset(dp, -1, sizeof(dp));

	cout<<subsetSum(arr, n, sum)<<'\n';

}