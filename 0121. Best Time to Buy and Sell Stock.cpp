121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        
        int profit;
        
        for(int i = 1; i<prices.size();i++){
            profit = prices[i] - min;
            
            if(profit > max)
                max = profit;
            if(min > prices[i])
                min = prices[i];
        }
        return max;
    }
};