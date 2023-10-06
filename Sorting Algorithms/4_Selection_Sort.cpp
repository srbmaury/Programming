// C++ program for implementation of selection sort 
#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 

        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void selection_sort(int *a, int num_elem)
{
    int i, j, min, min_index, temp;
    for(i=0; i<num_elem-1; i++)
    {
        min=a[i];
        min_index=i;
    
        for(j=i; j<num_elem;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                min_index=j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }
    // for(int i=0; i<num_elem; i++) 
    // printf("%d ", a[i]);
}

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selection_sort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
  