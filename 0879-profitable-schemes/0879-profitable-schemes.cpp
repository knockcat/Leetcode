class Solution {
public:
   int dp[101][101][101];
    const int mod = 1e9 + 7;
    int help(int idx, int members, int pro, int n, int minProfit, vector<int> &group, vector<int> &profit)
    {
        if (idx == group.size())
            return pro >= minProfit;

        if (dp[idx][members][pro] != -1)
            return dp[idx][members][pro];

        int take = 0;
        if (members + group[idx] <= n)
            take = help(idx + 1, members + group[idx], min(minProfit, pro + profit[idx]), n, minProfit, group, profit);

        int nottake = help(idx + 1, members, pro, n, minProfit, group, profit);
        return dp[idx][members][pro] = ((long)take + (long)nottake) % mod;
    }
    int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit)
    {
        memset(dp, -1, sizeof(dp));
        return help(0, 0, 0, n, minProfit, group, profit);
    }
};