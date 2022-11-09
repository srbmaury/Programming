#include<bits/stdc++.h>
using namespace std;

const int N = 1010, Sum = 1e5+10, INF = INT_MAX;
int dp[N][Sum];
int arr[N];
int minimumNumber(int arr[], int n, int sum){

    for(int i=0; i<=sum; i++) dp[0][i] = INF; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1] <= j)
                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-arr[i-1]]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return (dp[n][sum] == INF) ? -1 : dp[n][sum];
}
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    int sum; cin>>sum;
    cout<<minimumNumber(arr,n,sum);
}