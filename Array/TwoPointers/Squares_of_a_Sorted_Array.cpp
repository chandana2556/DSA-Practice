/* Squares of a Sorted Array
   Leetcode 977: https://leetcode.com/problems/squares-of-a-sorted-array/
   
   Time Complexity: O(n)
   Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int>res(nums.size());
        int pos=nums.size()-1;
        while(left<=right){
            int left_sqr=nums[left]*nums[left];
            int right_sqr=nums[right]*nums[right];
            if(left_sqr>right_sqr){
                res[pos]=left_sqr;
                left++;
            }else{
                res[pos]=right_sqr;
                right--;
            }
            pos--;
        }
        return res;
    }
};