#include<iostream>
using namespace std;
void insertion_sort(int *, int );

int main()
{
    int i;
    int a[]={3,-2,1,4,7,5,0,8,-1,67,34,-35,-4,6,0,1};
    int num_elem=sizeof(a)/sizeof(int);
    insertion_sort(a,num_elem);
    for(i=0; i<num_elem;i++)
        cout<<a[i]<<" ";
    return 0;
}
void insertion_sort(int *a, int num_elem)
{
    int i,j,k,temp;
    for(i=1; i<num_elem; i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0)
        {
            if(a[j]>a[i])
                j--;
            else
                break;
        }
        for(k=i-1; k>=j+1; k--)
            a[k+1] = a[k];
        a[j+1] = temp;
    }
}
