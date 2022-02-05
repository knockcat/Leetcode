// 1475.✅ Final Prices With a Special Discount in a Shop

class Solution
{
public:
    vector<int> ans;
    vector<int> finalPrices(vector<int> &prices)
    {
        for (int i = 0; i < prices.size(); ++i)
        {
            int j;
            for (j = i + 1; j < prices.size(); ++j)
            {
                if (prices[j] <= prices[i])
                {
                    ans.push_back(prices[i] - prices[j]);
                    break;
                }
            }
            if (j == prices.size())
                ans.push_back(prices[i]);
        }
        return ans;
    }
};
