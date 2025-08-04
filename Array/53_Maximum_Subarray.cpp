//53 Maximum Subarray

//Brute Force Approach: O(n^2)

class Solution{
public:
    int maxSubArray(vector<int>&nums){
        int n=nums.size();
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            int currSum=0;
            for(int j=i;j<n;j++){
                currSum+=nums[j];
                maxSum=max(maxSum,currSum);
            }
        } 
        return maxSum; 
    }
};      

//Optimized Approach: O(n)

class Solution{
public:
    int maxSubArray(vector<int>&nums){
        int maxSum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(nums[i],currSum+nums[i]);
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};      