// 1578.✅ Minimum Time to Make Rope Colorful

class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int res = 0;

        for (int i = 1; i < colors.size(); ++i)
        {
            if (colors[i] == colors[i - 1])
            {
                res += min(neededTime[i], neededTime[i - 1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        return res;
    }
};
