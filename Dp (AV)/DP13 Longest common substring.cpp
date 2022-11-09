#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int ans;

/* wrong */
// int  lcs(string s1, string s2, int x, int y){
//     if(x == 0 || y == 0) return 0;
    
//     if(dp[x][y] != -1) return dp[x][y];
    
//     if(s1[x-1] == s2[y-1]){ 
//         return dp[x][y] = 1+ lcs(s1,s2,x-1,y-1);
//         ans = max(ans, dp[x][y]); 
//     }
//     else{
//         dp[x][y] = 0;
//         ans = max({ans,lcs(s1,s2,x,y-1),lcs(s1,s2,x-1,y)});       
//     }
//     return ans;
// }

int LCS(string s1, string s2, int x, int y){
    for(int i=0; i<=x; i++) dp[i][0] = 0;
    for(int i=0; i<=y; i++) dp[0][i] = 0;

    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                ans = max(ans, dp[i][j]);
            }else{
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}
int main(){
    string s1, s2; cin>>s1>>s2;
    int x = s1.size(), y = s2.size();
    memset(dp, -1, sizeof(dp));
    cout<<lcs(s1,s2,x,y)<<endl;
    cout<<LCS(s1,s2,x,y)<<endl;
}