// Problem: Two Sum


// Brute Force Approach: O(n^2)
vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

//Optimized Approach: O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); ++i) {
        int remain = target - nums[i];
        if (seen.count(remain)) {
            return {seen[remain], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}
