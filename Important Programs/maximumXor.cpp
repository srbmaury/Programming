// Given an array of size n. n <= 15
// Find a subsequence such that xor of the subsequence is max

// 1 << n = 2^n

/* ith bit of x is 1 or not
    x & ( 1 << i) = 0 ; ith bit of x is not 1
    x & ( 1 << i) != 0 ; ith bit of x is 1       (ith bit is set)
*/

/* {1,2,3,...,n}  has 2^n subsets   */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getSubsets(vector<int> num){
    int size = num.size();
    int subsetNum = (1<<size);
    vector<vector<int>> allSubsets;
    for(int subsetMask = 0; subsetMask < subsetNum; ++subsetMask){                            // 2^n
        vector<int> subset;
        for(int i=0; i<size; i++)                                                        // n
            if((subsetMask & (i << i)) != 0)           
                subset.push_back(num[i]);
        allSubsets.push_back(subset);
    }
    return allSubsets;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<vector<int>> subsets= getSubsets(v);
    int mxXor = 0;
    vector<int> ans;
    for(vector<int> subset : subsets){
        int xr = 0;
        for(int ele : subset){
            xr ^= ele;
        }
        if(xr > mxXor){
            mxXor = xr;
            ans = subset;
        }
    }
}