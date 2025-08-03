//169 Majority Element

//Using Boyer Moore Voting Algorithm 
//Optimized Approach: O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res;
        int count=0;
        for(int num : nums){
            if(count==0){
                res=num;
            }
            if(num==res)
                count++;
            else
                count--;
        }
        return res;
    }
};