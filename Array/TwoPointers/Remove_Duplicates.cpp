/* Remove Duplicates from Sorted Array
   Leetcode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
   
   Time Complexity: O(n)
   Space Complexity: O(1)
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int j=1;
        for(int i=1;i<nums.size();i++){
            if ( nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};