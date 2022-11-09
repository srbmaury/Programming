// ETF ounts the number of integers upto n which are co-prime to n

// f(N * M)=f(N)*f(M)   where gcd(N,M) = 1

// phi(N) = N * (p1 - 1)/p1 * (p2 - 1)/p2 * ...

int phi(int n){
	int res = n;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			res/=i;
			res*=(i-1);

			while(n%i==0) n/=i;
		}
	}
	if(n>1)
		res/=n, res *= (n-1);
	return res;
}
