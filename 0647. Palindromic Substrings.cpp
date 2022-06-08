// 647.✅ Palindromic Substrings

class Solution
{
public:
    int countSubstrings(string s)
    {
        int start, end, ind = 0, n = s.size();

        for (int i = 0; i < n; ++i)
        {
            start = i, end = i;

            while (start >= 0 && end < n && s[start--] == s[end++])
                ++ind;

            start = i - 1, end = i;

            while (start >= 0 && end < n && s[start--] == s[end++])
                ++ind;
        }

        return ind;
    }
};