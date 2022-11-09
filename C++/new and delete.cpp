// S M A : Static Memory Allocation
// D M A : Dynamic Memory Allocation 
struct Complex{

};
int *p=new int;
float *q=new float;
Complex *ptr= new Complex;
float *q=new float[5];
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int *p=new int[x];
    delete p;
    delete []p;

    return 0;
}

//delete : to release memory allocated by dma
