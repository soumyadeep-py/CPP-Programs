#include<iostream>
using namespace std;
#include<vector>

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int val : nums) {
        currentSum += val;
        if (currentSum < 0) {
            currentSum = 0; // Reset current sum if it becomes negative
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> numbers = {-2,1,-3,4,-1,2,1,-5,4}; // Example input
    cout << "The input array is: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "The maximum subarray sum is: " << maxSubArray(numbers) << endl;
    
    return 0;
}