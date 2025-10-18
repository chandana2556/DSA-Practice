/*Two Sum II - Input Array Is Sorted
Leetcode 167: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<end){
            int sum=nums[start]+nums[end];
            if(sum==target){
                return{start+1,end+1};
            }else if(sum<target){
                start++;
            }else{
                end--;
            }
        }
        return{};
    }
};
