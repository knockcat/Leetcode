// 518.✅ Coin Change 2

class Solution
{

    int CoinChange(vector<int> &coins, int sum, int n)
    {
        int t[n + 1][sum + 1];
        for (int i = 0; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
            }
        }

        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < sum + 1; ++j)
            {
                if (coins[i - 1] <= j)
                    t[i][j] = t[i - 1][j] + t[i][j - coins[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }

public:
    int change(int amount, vector<int> &coins)
    {
        int n = coins.size();

        return CoinChange(coins, amount, n);
    }
};