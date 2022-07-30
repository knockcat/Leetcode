// 890.✅ Find and Replace Pattern

class Solution
{
public:
    vector<int> found_Pattern(string pattern)
    {
        if (pattern.size() == 0)
            return {};

        vector<int> v;
        int ind = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < pattern.size(); ++i)
        {
            if (mp.find(pattern[i]) == mp.end())
            {
                mp.insert({pattern[i], ind++});
                v.push_back(mp[pattern[i]]);
            }
            else
            {
                v.push_back(mp[pattern[i]]);
            }
        }
        return v;
    }
    vector<string> findAndReplacePattern(vector<string> &words, string pattern)
    {

        vector<int> v = found_Pattern(pattern);

        int n = words.size();
        vector<string> ans;

        for (int i = 0; i < n; ++i)
        {
            vector<int> pattern_word = found_Pattern(words[i]);

            if (v == pattern_word)
                ans.push_back(words[i]);
        }

        return ans;
    }
};