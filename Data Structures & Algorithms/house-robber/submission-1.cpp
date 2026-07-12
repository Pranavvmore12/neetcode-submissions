class Solution {
public:
    int amount(vector<int> &nums, int i,  vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int robbed=nums[i]+amount(nums, i+2, dp);
        int skip=0+amount(nums, i+1, dp);
        dp[i]=max(robbed, skip);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return amount(nums, 0, dp);
    }
};
