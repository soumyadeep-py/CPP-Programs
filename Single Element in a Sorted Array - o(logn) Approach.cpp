// In world of DSA, n(logn) on a sorted array means a binary search approach.
// Solving Leetcode problem 540: Single Element in a Sorted Array using O(log n) approach

#include<iostream>
using namespace std;
#include<vector>

void printArray(const vector<int>& arr) {
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while(left < right) {
        int mid = left + (right - left) / 2;
        
        // Check if the mid element is the single element
        if(mid % 2 == 1) {
            mid--; // Ensure mid is even
        }

        if(nums[mid] == nums[mid + 1]) {
            left = mid + 2; // Move right if the pair is valid
        } else {
            right = mid; // Move left if the pair is not valid
        }
    }
    
    return nums[left]; // The single element will be at the end of the loop
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // Example input
    cout << "The input array is: ";
    printArray(nums);
    cout << "The single element in the sorted array is: " << singleNonDuplicate(nums) << endl;
}