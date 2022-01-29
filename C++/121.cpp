class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int min_value = prices[0];
        int max_profit = 0;
        for(int i = 1; i < prices.size(); i++){
            max_profit = max(max_profit, prices[i]-min_value);
            min_value = min(prices[i], min_value);
        }
        return max_profit;
    }
};