#include<iostream>
#include<algorithm>
using namespace std;
// Iterative 
int binarySearch(int arr[], int x, int n){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(x==arr[mid]) return mid;
        else if(x<arr[mid]) high=mid-1;
        else low = mid+1;
    }
    return -1;
}
int binaryFirst(int arr[], int x, int n){
    int low = 0, high = n-1,res=-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(x==arr[mid]) {res=mid; high=mid-1;}
        else if(x<arr[mid]) high=mid-1;
        else low = mid+1;
    }
    return res;
}
int binaryLast(int arr[], int x, int n){
    int low = 0, high = n-1,res=-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(x==arr[mid]) {res=mid; low=mid+1;}
        else if(x<arr[mid]) high=mid-1;
        else low = mid+1;
    }
    return res;
}

// recursive
int binaryrec(int arr[], int low, int high, int x){
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    if(x==arr[mid]) return mid;
    else if(x<arr[mid]) return binaryrec(arr, low, mid-1, x);
    else return binaryrec(arr, mid+1, high, x);
}

// some other ways
bool search(int x[], int n, int k) {
    int p = 0;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] <= k) p += a;
    }
    return x[p] == k;
}

int count(int x[], int n, int k) {
    int p = -1, q = -1;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] < k) p += a;
        while (q+a < n && x[q+a] <= k) q += a;
    }
    return q-p;
}

int main(){
    int arr[]={1,1,1,2,2,2,3,3,3,4,4,5,5,5,5,5,5,6,6,7};
    sort(arr,arr+sizeof(arr)/sizeof(int));
    int n=binarySearch(arr,5,sizeof(arr)/sizeof(int));
    cout<<n<<endl;
    n=binaryFirst(arr,5,sizeof(arr)/sizeof(int));
    cout<<n<<endl;
    n=binaryLast(arr,5,sizeof(arr)/sizeof(int));
    cout<<n<<endl;
    n=binaryrec(arr,0,sizeof(arr)/sizeof(int)-1, 5);
    cout<<n<<endl;
}
