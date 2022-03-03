// 1051.✅ Height Checker

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        int cnt = 0;

        vector<int> ans = heights;

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); ++i)
        {
            if (heights[i] != ans[i])
                ++cnt;
        }

        return cnt;
    }
};