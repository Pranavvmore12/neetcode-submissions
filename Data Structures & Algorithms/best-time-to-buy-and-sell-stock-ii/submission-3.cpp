class Solution {
public:
    int solve(vector<int>&prices, bool hold, int i, vector<vector<int>>&dp){
        if(i==prices.size())return 0;
        if(dp[i][hold]!=-1){
            return dp[i][hold];
        }
        if(hold){
            int sell=prices[i]+solve(prices, false, i+1,dp);
            int skip=solve(prices, true, i+1,dp);
            dp[i][hold]=max(sell,skip);
        }else{
            int buy=-prices[i]+solve(prices, true, i+1,dp);
            int skip=solve(prices, false, i+1,dp);
            dp[i][hold]=max(buy,skip);
        }
        return dp[i][hold];
        
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return solve(prices, false, 0, dp);
    }
};

