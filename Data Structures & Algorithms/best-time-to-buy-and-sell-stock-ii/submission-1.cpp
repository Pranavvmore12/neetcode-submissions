class Solution {
public:
    int solve(vector<int>&prices, bool hold, int i){
        if(i==prices.size())return 0;
        if(hold){
            int sell=prices[i]+solve(prices, false, i+1);
            int skip=solve(prices, true, i+1);
            return max(sell,skip);
        }else{
            int buy=-prices[i]+solve(prices, true, i+1);
            int skip=solve(prices, false, i+1);
            return max(buy,skip);
        }
        
    }
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};

