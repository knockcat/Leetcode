// 1049.✅ Last Stone Weight II

class Solution
{
public:
    int lastStoneWeightII(vector<int> &stones)
    {
        int n = stones.size();

        int sum = accumulate(stones.begin(), stones.end(), 0);

        int t[n + 1][sum + 1];

        for (int i = 0; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                // initializing first row and col of dp table
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
                if (stones[i - 1] <= j)
                    t[i][j] = t[i - 1][j] || t[i - 1][j - stones[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }

        int mn = INT_MAX;

        for (int j = 0; j <= sum; ++j)
        {
            if (t[n][j])
                mn = min(mn, abs(sum - 2 * j));
        }

        return mn;
    }
};