// Solving Leetcode problem 540: Single Element in a Sorted Array using O(n) approach
// Recommended to use O(log n) as per question, but here we are using O(n) approach to show the use of XOR operator

#include<iostream>
using namespace std;
#include<vector>

int singleNonDuplicate(vector<int>& nums) {
    int result = 0;
    for(int num : nums) {
        result ^= num; // XOR operation
    }
    return result;
}

int printArray(const vector<int>& arr) {
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // Example input
    cout << "The input array is: ";
    printArray(nums);
    cout << "The single element in the sorted array is: " << singleNonDuplicate(nums) << endl;
    vector<int> nums2 = {3,3,7,7,10,11,11}; // Another example input
    cout << "The input array is: ";
    printArray(nums2);
    cout << "The single element in the sorted array is: " << singleNonDuplicate(nums2) << endl;
    
    return 0;
}