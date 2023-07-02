class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = INT_MAX, n = prices.size();
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            minPrice = min(minPrice, prices[i]);
            ans = max(ans, prices[i] - minPrice);
        }
        
        return ans;
        
    }
};