// 438.✅ Find All Anagrams in a String

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int s_len = s.length();
        int p_len = p.length();

        if (s.size() < p.size())
            return {};

        vector<int> freq_P(26, 0);
        vector<int> window(26, 0);

        // first window
        for (int i = 0; i < p_len; ++i)
        {
            ++freq_P[p[i] - 'a'];
            ++window[s[i] - 'a'];
        }

        vector<int> ans;
        if (freq_P == window)
            ans.push_back(0);

        for (int i = p_len; i < s_len; ++i)
        {
            --window[s[i - p_len] - 'a'];
            ++window[s[i] - 'a'];

            if (freq_P == window)
                ans.push_back(i - p_len + 1);
        }
        return ans;
    }
};