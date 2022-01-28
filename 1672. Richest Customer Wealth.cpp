// 1672.✅ Richest Customer Wealth

class Solution
{
public:
    int max = INT_MIN;
    int maximumWealth(vector<vector<int>> &accounts)
    {
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum += accounts[i][j];
            }
            if (max <= sum)
                max = sum;
        }
        return max;
    }
};