// 1876.✅ Substrings of Size Three with Distinct Characters

class Solution
{
public:
    int countGoodSubstrings(string s)
    {

        if (s.length() < 3)
            return 0;

        int cnt = 0;

        for (int i = 0; i <= s.length() - 3; ++i)
        {
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
                cnt++;
        }
        return cnt;
    }
};
