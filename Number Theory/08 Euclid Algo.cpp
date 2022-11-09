int gcd(int a, int b){
	return ((b==0)?a:gcd(b,a%b));
}


/* let gcd(a,b) = g
1: gcd(a,0) = gcd(0,a) = a;
2: gcd(a,b) = gcd(b,a)
3: gcd(a,b) = gcd(a-b,b) = gcd(a, b-a)
*/




#include<bits/stdc++.h>
int main(){std::cout<<gcd(24,6);}