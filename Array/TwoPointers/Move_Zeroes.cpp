/* Move Zeroes
   Leetcode: 283 https://leetcode.com/problems/move-zeroes/

   Time Complexity: O(n)
   Space Complexity: O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=j;i<nums.size();i++){
            nums[i]=0;
        }
    }
};