#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define rep(i,k,n) for(ll i=k; i<n; i++)
  

/***************** OUTPUT ALL PRIMES BETWEEN A AND B *******************************/

void fillPrimes(vector<int>& prime, int B){
    bool ck[B + 1];
    memset(ck, true, sizeof(ck));
    ck[1] = false;
    ck[0] = false;
    for (int i = 2; (i * i) <= B; i++) {
        if (ck[i] == true) {
            for (int j = i * i; j <= B; j = j + i) {
                ck[j] = false;
            }
        }
    }
    for (int i = 2; i * i <= B; i++) {
        if (ck[i] == true) {
            prime.push_back(i);
        }
    }
}

void prime_numbers_between(int A, int B){
    bool prime[B - A + 1];
    memset(prime, true, sizeof(prime));

    vector<int> chprime;
    fillPrimes(chprime, B);    
    for (int i : chprime) {
        int lower = (A / i);   
        if (lower <= 1) {
            lower = i + i;
        }
        else if (A % i) {
            lower = (lower * i) + i;
        }
        else {
            lower = (lower * i);
        }
        for (int j = lower; j <= B; j = j + i) {
            prime[j - A] = false;
        }
    }

    for (int i = A; i <= B; i++) {
        if (prime[i - A] == true) {
            cout << (i) << " ";
        }
    }
}

/************************** IS PRIME OR NOT ****************************************/

// every prime number can be written in the form of 6n-1 or 6n+1
bool isPrime(long long n){
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0||n%3==0)return false;
    for(long long i=5;i*i<=n;i=i+6)
        if(n%i==0||n%(i+2)==0)return false;
    return true;
}

/***************************** MOST SIGNIFICANT DIGIT*****************************/

template <class X> inline int mostSignificantDigit(X N){
    double K = log10(N);
    K = K - floor(K);
    return pow(10, K);
}

/******************************** IS POWER OF TWO? ********************************/

template <class X> inline bool isPowerOfTwo (X x){
  return x && (!(x&(x-1)));
}

bool isPowerOfFour(int x){
    int cnt=0;
    if(x && (!(x&(x-1)))){
        while(x > 1){
            cnt++;
            x>>=1;
        }
        if(cnt%2==0) return true;
    }
    return false;
}

/************************* is power of 2^n ******************************************/
bool isPowerof2n(int x, int n){
    int cnt=0;
    if(x && (!(x&(x-1)))){
        while(x > 1){
            cnt++;
            x>>=1;
        }
        if(cnt%n==0) return true;
    }
    return false;
}

/************************ (base) ^ (exp) % modulus *******************************/

template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

/*************************** nCr and nPr *******************************************/
ll nCr(ll n,ll r){ll res=1;if(n<r)return -1;r=min(r,n-r);
rep(i,0,r){res*=(n-i);res/=(i+1);}return res;}
 
ll nPr(ll n,ll r){ll res=1;if(n<r)return -1;
rep(i,0,r)res*=(n-i);return res;}

/****************** MAXIMUM OR MINIMUM ELEMENT OF A VECTOR ************************/

/*next_permutation(first_iterator, last_iterator) 
This modified the vector to its next permutation*/

/*distance(first_iterator,desired_position)
It returns the distance of desired position from the first iterator.
This function is very useful while finding the index*/

/******************************** XOR from 1 to n **********************************/
int XORfrom1ton(int n){
    if(n%4==0) 
        return n; 
    else if(n%4==1) 
        return 1;
    else if(n%4==2) 
        return n+1;
    return 0;
}


/************************* CONVERT a TO BASE n *************************************/
string convertToBasen(int a, int n){
    string s;
    while(a){
        s.push_back(a%n + 48);
        a/=n;
    }
    reverse(s.begin(),s.end());
    return s;
}


/************ POWER ******************/
ll Power(ll x, ll y){
    if(y==0)
        return 1;
    else if(y%2==0)
        return Power(x,y/2) * Power(x,y/2);
    else 
        return x*Power(x,y/2) * Power(x,y/2);
}

/******************************** res % mod ******************************************/
ll respermod(ll res){
    if(res >= 0) cout<<res%mod; 
    else{
        while(res<0){
            res+=mod;
        }
        cout<<res%mod;
    }
}


/***************************************************************************

to calculate ⌈x/y⌉ in integers, you should divide x+y−1 by y using integer division 
(this will work provided that both x and y are non-negative, and y≠0). 
If you use real numbers, this may cause precision issues.



****************************************************************************/
int add_modulo(int a, int b){
    return (a%mod + b%mod)%mod;
}
int sub_modulo(int a, int b){
    return (a%mod - b%mod)%mod;
}
int mul_modulo(int a, int b){
    return (a%mod * b%mod)%mod;
}
int div_modulo(int p, int q)
{
    int expo;
    expo = mod - 2;
 
    while (expo) {
 
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        expo >>= 1;
    }
    return p;
}
int main(){
    
}
/************************* MAXIMUM SUBARRAY SUM ***********************************/
int maxSubarraySum(vector<int>array){
    int best = 0, sum = 0;
    for(int k=0; k<n; k++){
        sum=max(array[k],sum+array[k]);
        best=max(best,sum);
    }
    return best;
}

// int range [1....t] how many numbers have ith set bit last bit is considered zero
int calc(int i,int t){
    int ans=(t+1)/(1<<i+1)*(1<<i)+max(0,(t+1)%(1<<i+1)-(1<<i));
    return ans;
}



/********************** Length of LIS ********************************/

// Binary search (note boundaries in the caller)
int CeilIndex(std::vector<int>& v, int l, int r, int key)
{
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m] >= key)
            r = m;
        else
            l = m;
    }
    return r;
}
 
int LongestIncreasingSubsequenceLength(std::vector<int>& v)
{
    if (v.size() == 0)
        return 0;
    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length - 1])
            tail[length++] = v[i];
        else
            tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
    }
    return length;
}

/***************** Prefx sum in a grid *********************************/


#include <bits/stdc++.h>
#define ll                      long long
#define rep(i,k,n)              for(long long i=k; i<n; i++)
#define FAST                    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
const ll N = 1e3+10;
ll a[N][N];
ll p[N][N];
int main(){
    FAST
    ll n; cin>>n;
    rep(i,1,n+1){
        rep(j,1,n+1) {
            cin>>a[i][j]; 
        }
    }
    rep(i,1,n+1){
        rep(j,1,n+1) p[i][j]=a[i][j]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
    }
    ll t; cin>>t; while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        cout<<p[c][d]+p[a-1][b-1]-p[a-1][d]-p[c][b-1]<<endl;
    }
    return 0;
}



/********** To get all subsets O(n*2^n) *********************/
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


/**************** To binary ******************************************/

string printBinary(int n){
    int k=n,cnt=0;
    string s;
    while(k) cnt++,k>>=1;
    for(int i=(1<<cnt-1); i>0; i/=2){
        if(n&i) s.pb('1'); else s.pb('0');
        // cout<<(bool(n&i));
    }
    return s;
}