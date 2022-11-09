// I'm not going to study inversion count using Merge sort or using trie


#include <bits/stdc++.h>
using namespace std;
#define MAX_NUMBER_OF_NODES 10000000
#define endl '\n'
#define f0(i, n) for(int i=0; i<n; i++)
typedef long long int ll;

ll trie[MAX_NUMBER_OF_NODES][2]={0};
ll store[MAX_NUMBER_OF_NODES][2]={0};
ll nxt = 1;
ll count1=0;
// Each row represents a node
// Numbers in that row represent the nxt node to which it is connected
// That number will be our nxt row

void insrt(int n) {
  ll t = 1;
  int z=31;
  for(int i = 0; i < 32; i++) {
    int p = ((1<<z)&n)?1:0;
    //cout<<p;
    z--;
    store[t][p]++;
    //cout<<store[t][p]<<" ";
    if(trie[t][p] == 0) {
      nxt++;
      trie[t][p] = nxt;
    } 
    if(p==0) {
      count1 += store[t][1];
    }
    t = trie[t][p];
  }
}

int main () {
  int t;
  cin>>t;
  while(t--) {
    for(int i=0; i<=nxt; i++) {
      trie[i][0]=0;
      trie[i][1]=0;
      store[i][0]=0;
      store[i][1]=0;
    }
    nxt=1;
    count1=0;
    int n;
    cin>>n;
    int a[n];
    f0(i, n) { 
      cin>>a[i];
      insrt(a[i]);
    }
    //f0(i, 6) insrt (a[i]);
    cout<<count1<<endl; 
  }
  
  return 0;
}