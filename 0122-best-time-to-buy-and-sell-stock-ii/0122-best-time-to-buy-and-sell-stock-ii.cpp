class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int aheadBuy, aheadNotBuy, currBuy, currNotBuy;
        aheadBuy = aheadNotBuy = 0;
        
        for(int i = n-1; i>=0; --i)
        {
            currBuy = max(-prices[i] + aheadNotBuy, aheadBuy);

            currNotBuy = max(prices[i] + aheadBuy, aheadNotBuy);

            aheadBuy = currBuy;
            aheadNotBuy = currNotBuy;
        }
        
        return aheadBuy;
    }
};