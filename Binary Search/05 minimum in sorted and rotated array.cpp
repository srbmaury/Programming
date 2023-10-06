// Let us see this problem in another way 
// How many times the sorted array is rotated 


#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& a) {
    int low=0;
    int high=a.size()-1;
    
    while(low<high)
    {
        int mid=low+(high-low)/2;
        
        if(a[mid]>a[high])
        {
            low=mid+1;
        }
        else if(a[mid]<a[high])
        {
            high=mid;
        }
    }
    return a[low];   //when loop breaks low=high so return either of them
}

main(){}