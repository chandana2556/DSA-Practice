//Missing Number

//Optimized Approach:O(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int n = nums.size();
        int estimated_sum = n*(n+1)/2;
        int actual_sum = 0;
        for (int num : nums){
            actual_sum +=num;
        }
        return  estimated_sum - actual_sum;
    }
};