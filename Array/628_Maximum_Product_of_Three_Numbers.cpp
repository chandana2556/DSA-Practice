//628. Maximum Product of Three Numbers

//Brute Force Approach (O(n^3)):
int bruteForceMaxProduct(vector<int>& nums) {
    int maxProduct = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) {
            for(int k = j+1; k < nums.size(); k++) {
                int product = nums[i] * nums[j] * nums[k];
                maxProduct = max(maxProduct, product);
            }
        }
    }
    return maxProduct;
}

//Optimized Approach O(n):
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int product1 = nums[n-1] * nums[n-2] * nums[n-3]; // Top 3 max
        int product2 = nums[0] * nums[1] * nums[n-1];     // 2 min (negatives) * max
        return max(product1, product2);
    }
};
