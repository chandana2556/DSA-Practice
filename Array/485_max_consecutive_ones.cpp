//Maximum Consecutive Ones

//Optimized Approach : O(n)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxCount=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==1){
                count++;
            }else{
                maxCount=max(maxCount,count);
                count=0;
            }
        }
        maxCount=max(maxCount,count);
        return maxCount;
    }
};
