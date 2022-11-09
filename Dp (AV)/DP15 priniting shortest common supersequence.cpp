#include<bits/stdc++.h>
using namespace std;
int dp[3001][3001];
int best[3001][3001];

string LCS(string s1, string s2, int x, int y){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            if(s1[i-1] == s2[j-1]){
                best[i][j] = 2;
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                if(dp[i][j-1] > dp[i-1][j]){
                    best[i][j] = 1;
                }else{
                    best[i][j] = 3;
                }
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    string res;
    int i = x, j = y;
    int lastx = x, lasty = y;
    while(i > 0 and j > 0){
        if(best[i][j] == 2){

            for(int it1=lastx-1; it1>=i; it1--) res.push_back(s1[it1]);
            for(int it2=lasty-1; it2>=j; it2--) res.push_back(s2[it2]);
            res.push_back(s1[i-1]);
            i--; j--;
            lastx = i;
            lasty = j;
        }else if(best[i][j] == 1){
            j--;
        }else
            i--;
    }

    for(int it1=lastx-1; it1>=0; it1--) res.push_back(s1[it1]);
    for(int it2=lasty-1; it2>=0; it2--) res.push_back(s2[it2]);
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    string s1, s2; cin>>s1>>s2;
    int x = s1.size(), y = s2.size();
        
    cout<<LCS(s1,s2,x,y)<<endl;
}