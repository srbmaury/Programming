

int Pow(int a, int n, long long P=1e18){
	int res = 1;
	while(n){
		if(n&1) res=(res*a)%P,n--;
		else a=(a*a)%P,n/=2;
	}
	return res;
}





#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<Pow(2,3,5);
}