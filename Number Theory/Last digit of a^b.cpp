#include <bits/stdc++.h>
using namespace std;
 
int Modulo(int a, string b)
{
    int mod = 0;
    for (int i = 0; i < b.length(); i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod;
}
 
int LastDigit(string a, string b)
{
    int len_a = a.length(), len_b = b.length();
    if (len_a == 1 && len_b == 1 && b[0] == '0' && a[0] == '0')
        return 1;
    if (len_b == 1 && b[0] == '0')
        return 1;
    if (len_a == 1 && a[0] == '0')
        return 0;
    int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b);
    int res = pow(a[len_a - 1] - '0', exp);
    return res % 10;
}
int main()
{
    int t;cin>>t;while(t--){
        string a,b; cin>>a>>b;
        cout<<LastDigit(a,b)<<'\n';
    }
    return 0;
}





#include <iostream>
#include<cmath>
using namespace std;
int Pow(int a, int n, long long P=10){
    int res = 1;
    while(n){
        if(n&1) res=(res*a)%P,n--;
        else a=(a*a)%P,n/=2;
    }
    return res;
}


int main() {
    int t; cin>>t;
    while(t--){
        long long x,y; cin>>x>>y;
        cout<<Pow(x,y)<<'\n';
    }
    return 0;
}