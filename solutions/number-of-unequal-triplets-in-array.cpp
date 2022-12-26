// https://leetcode.com/problems/number-of-unequal-triplets-in-array

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i]!=nums[j] and nums[j]!=nums[k] and nums[i]!=nums[k]) ans++;
                }
            }
        }
        return ans;
    }
};