#include<bits/stdc++.h>


int numFactor(int N){
	int res = 1;
	for(int i=2; i*i<=N; i++){
		if(N%i == 0){
			int cnt=0;
			while(N%i == 0)
				cnt++, N/=i;
			res *= (cnt + 1);
		}
	}
	if(N>1)
		res *= 2;
	return res;
}



int main(){
	for(int i=1; i<=20; i++){
		std::cout<<i<<" : "<<numFactor(i)<<'\n';
	}
}