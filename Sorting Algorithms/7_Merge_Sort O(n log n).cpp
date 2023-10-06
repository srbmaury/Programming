#include<bits/stdc++.h>
using namespace std;

// For Linked lists


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void findMiddle(ListNode **first, ListNode **second){
        ListNode *slow=*first, *fast = (*first)->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        *second = slow -> next;
        slow -> next = NULL;
    }
    ListNode* merge(ListNode* first, ListNode* second){
        if(!first) return second;
        if(!second) return first;
        ListNode* ans;
        if(first -> val <= second -> val){
            ans = first;
            ans -> next = merge(first -> next, second);
        }else{
            ans = second;
            ans -> next = merge(first, second -> next);            
        }
        return ans;
    }
    void sort(ListNode **head){
        ListNode *first = *head, *second;
        if(first == NULL || first -> next == NULL) return;
        findMiddle(&first, &second);
        sort(&first);
        sort(&second);
        *head = merge(first, second);
    }
    ListNode* sortList(ListNode* head) {
        sort(&head);
        return head;
    }
};


// For Array
class Solution {
public:
    void merge(vector<int>&nums, int left, int mid, int right){
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        vector<int>leftArray(n1), rightArray(n2);
        
        for(int i=0; i<n1; i++)
            leftArray[i] = nums[left+i];
        
        for(int i=0; i<n2; i++)
            rightArray[i] = nums[mid + 1 + i];
        
        int i = 0, j = 0, k = left;
        
        while(i<n1 && j<n2){
            if(leftArray[i] < rightArray[j]){
                nums[k++] = leftArray[i++];
            }else{
                nums[k++] = rightArray[j++];
            }
        }
        
        while(i<n1){
            nums[k++] = leftArray[i++];
        }
        while(j<n2){
            nums[k++] = rightArray[j++];
        }
    }
    void mergeSort(vector<int>&nums, int low, int high){
        if(low < high){
            int mid = low + (high - low)/2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};