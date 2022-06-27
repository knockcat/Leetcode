// 5.✅ Longest Palindromic Substring

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        vector<vector<int>> t(n, vector<int>(n, 0));

        string ans;
        int maxlen = 0;

        for (int diff = 0; diff < n; ++diff)
        {
            for (int i = 0, j = i + diff; j < n; ++i, ++j)
            {
                if (i == j)
                    t[i][j] = 1;
                else if (diff == 1)
                    t[i][j] = (s[i] == s[j]) ? 2 : 0;
                else
                {
                    if (s[i] == s[j] && t[i + 1][j - 1])
                        t[i][j] = t[i + 1][j - 1] + 2;
                }
                if (t[i][j])
                {
                    if (j - i + 1 > maxlen)
                    {
                        maxlen = j - i + 1;
                        ans = s.substr(i, maxlen);
                    }
                }
            }
        }
        return ans;
    }
};