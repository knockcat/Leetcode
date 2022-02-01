// 122.✅ Best Time to Buy and Sell Stock II

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();

        if (n == 0 || n == 1)
            return 0;

        vector<int> t(n, 0);
        t[0] = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            t[i] = max(t[i - 1], t[i - 1] + (prices[i] - prices[i - 1]));
        }
        return t[n - 1];
    }
};