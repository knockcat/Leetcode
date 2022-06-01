// 3.✅ Longest Substring Without Repeating Characters

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, j = 0, n = s.length();

        map<char, int> m;

        int mx = 0;

        while (j < n)
        {
            ++m[s[j]];
            if (m.size() > j - i + 1)
            {
                // never hit
            }
            else if (m.size() == j - i + 1)
            {
                mx = max(mx, j - i + 1);
            }
            else if (m.size() < j - i + 1)
            {
                while (m.size() < j - i + 1)
                {
                    --m[s[i]];
                    if (m[s[i]] == 0)
                        m.erase(s[i]);
                    ++i;
                }
            }
            ++j;
        }
        return mx;
    }
};