#include<bits/stdc++.h>


void primeFactor(int N){
	for(int i=2; i*i<=N; i++){
		if(N%i == 0){
			int cnt=0;
			while(N%i == 0)
				cnt++, N/=i;
			std::cout<<i<<"^"<<cnt<<' ';
		}
	}
	if(N>1)
		std::cout<<N<<"^1";
}

int main(){
	primeFactor(60);
}