// 1653.✅ Minimum Deletions to Make String Balanced

class Solution
{
public:
    int minimumDeletions(string s)
    {
        int cnta = 0, cntb = 0, a = 0, b = 0;

        for (auto i : s)
        {
            if (i == 'a')
                ++cnta;
            else
                ++cntb;
        }

        int n = s.length();
        int ans = cnta;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'a')
                ++a;
            else
                ++b;
            ans = min(ans, cnta - a + b);
        }
        return ans;
    }
};