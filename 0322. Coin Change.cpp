// 322.✅ Coin Change

class Solution
{
    int min_coins(vector<int> &coins, int sum, int n)
    {
        int t[n + 1][sum + 1];

        for (int i = 0; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                if (j == 0)
                    t[i][j] = 0;
                if (i == 0)
                    t[i][j] = INT_MAX - 1;
                if (i == 1 && j != 0)
                {
                    if (j % coins[0] == 0)
                        t[i][j] = j / coins[0];
                    else
                        t[i][j] = INT_MAX - 1;
                }
            }
        }

        for (int i = 2; i < n + 1; ++i)
        {
            for (int j = 1; j < sum + 1; ++j)
            {
                if (coins[i - 1] <= j)
                    t[i][j] = min(t[i - 1][j], 1 + t[i][j - coins[i - 1]]);
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }

public:
    int coinChange(vector<int> &coins, int amount)
    {

        int n = coins.size();

        int m = min_coins(coins, amount, n);

        return m == INT_MAX - 1 ? -1 : m;
    }
};