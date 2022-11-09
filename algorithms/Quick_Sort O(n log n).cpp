#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(vector<int>&nums, int low, int high){
        int pivot = nums[high];
        int i = (low - 1);
        
        for(int j=low; j<=high-1; j++){
            if(nums[j] < pivot){
                swap(nums[j], nums[++i]);
            }
        }
        swap(nums[++i], nums[high]);
        return i;
    }
    void quickSort(vector<int>&nums, int low, int high){
        if(low < high){
            int pi = partition(nums, low, high);
            quickSort(nums, low, pi-1);
            quickSort(nums, pi+1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};