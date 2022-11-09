// Binary Left and Right Shift
// N=N<<i shifts all bits to i places to the left and is equivalent to N=N*(2^i)
// N=N>>1 ------ N=N/(2^i)

// Checking for ith set bit  (considering last bit as 0th bit)
// initialise F=1; left shift F=F<<i; if(N&(F<<i)==0) cout<<"NO"; else cout<<"YES";

// Count number of set bits

// 1. while(n) {if(n&1) ++count; n=n>>1;}
/* 2. in n-1 only rightmost set bit is changed to 0
       while(n) {count++; n=n&(n-1);}       
       while loop runs as many times as there are set bits         */




//    X  O  R          O  P  E  R  A  T  I  O  N  S

//    1.    0 ^ A = A
//    2.    A ^ A = 0
//    2.    A ^ B ^ C = B ^ A ^ C


// Given an array of integers and Q queries of form L, R find XOR of elements from L to R in the given array
// answer of query L,R = prefix[R]^prefix[L-1] if(L>0)   since a[1], a[2],...a[L-1] are repeated
// and prefix[R] if(L=0)

// pair sum XOR of a given array 

/* 4 3 9 1
sum matrix
8  7 13  5
7  6 12  4
13 12 18 10
5  4 10  2

All the elements except diagonal elements are appearing twice so there XOR gets cancelled  */

// Total sum of all pair xor

