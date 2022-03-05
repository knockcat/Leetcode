// 746.✅ Min Cost Climbing Stairs

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> t(n + 1);

        for (int i = 2; i <= n; ++i)
        {
            int oneStep = t[i - 1] + cost[i - 1];
            int twoStep = t[i - 2] + cost[i - 2];
            t[i] = min(oneStep, twoStep);
        }

        return t[n];
    }
};
