#include <bits/stdc++.h>
using namespace std;

double eps = 1e-6;
double Sqrt(int n){

}
int main(){
   int t; cin>>t;
   while(t--){


    double x; 
    cin>>x;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
    	mid = (hi + lo)/2;
    	if(mid*mid < x){
    		lo = mid;
    	}else{
    		hi = mid;
    	}
    }
    cout<<lo<<endl;
}
    return 0;
}