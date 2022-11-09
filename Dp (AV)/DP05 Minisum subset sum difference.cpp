/* 
	Minimum subset sum difference in partition of two 
	a[] = {1, 6, 11, 5}
	best : {1, 6, 5}, {11} ----> 1 
*/

// Divide array in 2 subsets such that their difference is minimum

// binary strings, Alice bob optimal, choose one of two steps 

// To find if is there any subset with given sum

/*
 {1, 2, 7} candidates for s1 and s2 : {0, 1, 2, 3, 7, 8, 9, 10}

 Two subsets S1 and range - S1  {considering S1 <= S2}

 (Minimise (S2- S1)) = Minimise (Range - 2*S1) 
*/

#include<bits/stdc++.h>
using namespace std;
int subsetSum(int a[], int n, int sum, vector<vector<int>>&dp){
    if (sum == 0) return 1;
    if (n <= 0) return 0;
   
    if (dp[n][sum] != -1) return dp[n][sum];
   
    if (a[n - 1] <= sum)
    	return dp[n][sum] = subsetSum(a, n - 1, sum, dp) ||
                       subsetSum(a, n - 1, sum - a[n - 1], dp);
    return dp[n][sum] = subsetSum(a, n - 1, sum, dp);
}
int minDifference(int a[], int n)  { 
    vector<vector<int>>dp; dp.resize(n+1);
    int sum = 0;
    for(int i=0;i<n;i++) sum += a[i];
    for(int i=0;i<=n;i++){
        dp[i].resize(sum+1);
        for(int j=0;j<=sum;j++) dp[i][j] = -1;
    }
    for(int i = sum/2; i>=0; i--){
    	if(subsetSum(a,n,i, dp) and subsetSum(a,n,sum - i, dp)) 
    	return sum - 2*i;
    }
    return 0;
}
int main(){
	int n; cin>>n;
	int a[n];  
	for(int i=0; i<n; i++) cin>>a[i];

	minDifference(a, n);
}