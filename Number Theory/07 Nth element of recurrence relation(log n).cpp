// https://cp-algorithms.com/algebra/fibonacci-numbers.html

// A recurrence relation is an equation that defines a sequene based on a rule 
// that gives the next term as a function of the previous terms

// A term of general recurrence relation depends on previous k terms
/*
(Fn-1 Fn) = (Fn-2 Fn-1).| 0 1 |
                        | 1 1 |
*/
#include<bits/stdc++.h>
using namespace std;

pair<int, int> fib (int n) {
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}
// The above code returns Fn and Fn+1 as a pair.

int main(){
	auto p = fib(4);
	cout<<p.first;
}


