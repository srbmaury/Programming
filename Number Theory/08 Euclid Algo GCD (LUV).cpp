

#include <bits/stdc++.h>
#define ll                      long long
#define endl                    '\n'
#define rep(i,k,n)              for(long long i=k; i<n; i++)           
using namespace std;
int gcd(int a, int b){
	// if(a % b == 0) return b;
	if(b == 0) return a;
	gcd(b, a%b);
}

// Using ternary operator
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}


// Non recursive 
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

/* While the Euclidean algorithm calculates only the greatest common divisor (GCD) 
 * of two integers a and b, the extended version also finds a way to represent GCD 
 * in terms of a and b, i.e. coefficients x and y for which:
 * a⋅x+b⋅y=gcd(a,b)
 */

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
/* The recursive function above returns the GCD and the values of coefficients to x and y 
 * (which are passed by reference to the function).
 *
 * This implementation of extended Euclidean algorithm produces correct results for negative integers as well.
 */

// Iterative approach 

int gcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}


int main(){
	int x,y;
    cout<<gcd(12,18,x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}