// 455.✅ Assign Cookies

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int cnt = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
            {
                ++i;
                ++j;
                ++cnt;
            }
            else
                ++j;
        }
        return cnt;
    }
};