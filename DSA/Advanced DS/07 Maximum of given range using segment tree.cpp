/*
	        	 [36]
	        	 (0:5)
	        	 /  \
	        	/    \
			   /      \
              /        \
	        [9]    		[27]
	       (0:2)   		(3:5)
	       / \     		 /  \
	      /   \    		/    \
	    [4]   [5]  	  [16]   [11]
	   (0:1)  (2:2)	  (3:4)  (5:5)
	   /  \           /  \
     [1]  [3]        /    \
    (0:0) (1:1)     [7]   [9]
                   (3;3)  (4:4)
*/

// Using 0-based indexing 

#include <bits/stdc++.h>
using namespace std;

const int N = 100000;

int tree[2 * N];

void build(int arr[], int n){
	for (int i=0; i<n; i++)
		tree[n+i] = arr[i];
	for (int i = n - 1; i > 0; --i)	
		tree[i] = max(tree[i<<1],tree[i<<1 | 1]);
}

void updateTreeNode(int p, int value, int n){
	tree[p+n] = value;
	p = p+n;
	for (int i=p; i > 1; i >>= 1)
		tree[i>>1] = max(tree[i],tree[i^1]);
}

int getMax(int l, int r, int n){
	int res = INT_MAX;
	for (l += n, r += n; l < r; l >>= 1, r >>= 1){
		if (l&1) res = max(res, tree[l++]);
		if (r&1) res = max(res, tree[--r]);
	}
	return res;
}

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	build(a, n);

	int q; cin>>q;
	while(q--){
		int t; cin>>t;
		if(t == 1){
			int i, x; cin>>i>>x;   // update ai to x
			i--;
			updateTreeNode(i, x, n);
		}else{
			int l,r; cin>>l>>r;
			l--; r--;
			cout<<getMax(l, r+1, n)<<endl;
		}
	}

	return 0;
}
