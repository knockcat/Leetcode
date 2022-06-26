// 1048.✅ Longest String Chain

class Solution
{
public:
    int longestStrChain(vector<string> &words)
    {
        unordered_map<string, int> dp;
        int res = 1;
        sort(words.begin(), words.end(), [](const string &l, const string &r)
             { return l.size() < r.size(); });
        for (string word : words)
        {
            dp[word] = 1;
            for (int i = 0; i < word.size(); i++)
            {
                string prev = word.substr(0, i) + word.substr(i + 1);
                if (dp.find(prev) != dp.end())
                {
                    dp[word] = dp[prev] + 1;
                    res = max(res, dp[word]);
                }
            }
        }
        return res;
    }
};