#include<bits/stdc++.h>
using namespace std;
// BINARY EXPONENTIATION _____________________________

// Binary exponentiation uses divide and conquer algorithm
// a^b time complexity log(b) for both methods

//  1. Recursive Approach 

const int M = 1e9+7;
int binExpRecurr(int a,int b){
    if(!b) return 1;
    int res = binExpRecurr(a,b/2);
    if(b&1) 
        return (a * ((res * 1LL * res)%M))%M;
    return (res * 1LL * res)%M;
}

// a <=10^9, b<=10^18, M<=10^9

//   2. Iterative approach


int binExpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1) ans = (ans * 1LL * a) % M;
        
        a = (a * 1LL * a) % M;

        b >>= 1;
    }
    return ans;
}

// a <=10^24 or 2^1024


//             (a^b)%M = ((a%M)^b)%M 


//   3. For large a and M

int binMultiply(long long a, long long b){
    int ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int binExp(int a, int b){
    int ans = 1;
    while(b){
        if(b&1) ans = binMultiply(ans,a);
        a = binMultiply(a,a);
        b >>= 1;
    }
    return ans;
}


// 4. For large b a^(b^c)

// ETF - Eular Totien Function

// ETF of N --> count of K (1<=k<=N) s.t. K and N are co-prime
// ETF(5) = 4 (1,2,3,4)
// ETF(6) = 3 (1,5)

// ETF(n) = n * Multiplication of all (1-1/p) p->prime factors of n

// (a^b)%m = a^(b mod ETF(m)) mod m

 // = (a^(b%ETF(m)))%m

 // for prime number m ETF(m) = m(1-1/m) = m - 1

// (a^b)%m = a^(b%(m-1))%m

int binExpL(int a, long long b, int M){
    int ans = 1;
    while(b){
        if(b&1) ans = (ans * 1LL * a) % M;
        
        a = (a * 1LL * a) % M;

        b >>= 1;
    }
    return ans;
}

int main(){
    // 50 ^ 64 ^ 32
    cout<<binExpL(50,binExpL(64,32,M-1),M);
}