// 76.✅ Minimum Window Substring

class Solution
{
public:
    string minWindow(string s, string t)
    {
        int i = 0, j = 0, n = s.length();
        unordered_map<char, int> m;

        for (char c : t)
            ++m[c];

        int mn = INT_MAX, cnt = m.size(), start = 0;

        while (j < n)
        {
            --m[s[j]];
            if (m[s[j]] == 0)
                --cnt;

            if (cnt == 0)
            {
                while (cnt == 0)
                {
                    if (mn > j - i + 1)
                    {
                        mn = j - i + 1;
                        start = i;
                    }

                    ++m[s[i]];
                    if (m[s[i]] > 0)
                        ++cnt;
                    ++i;
                }
            }
            ++j;
        }

        return mn == INT_MAX ? "" : s.substr(start, mn);
    }
};