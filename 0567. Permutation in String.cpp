// 567.✅ Permutation in String

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        unordered_map<char, int> mp;
        for (auto i : s1)
            ++mp[i];

        int cnt = mp.size();
        int i = 0, j = 0;

        int k = s1.size();

        while (j < s2.size())
        {
            if (mp.find(s2[j]) != mp.end())
            {
                mp[s2[j]]--;

                if (mp[s2[j]] == 0)
                    --cnt;
            }

            if (j - i + 1 < k)
                ++j;

            else if (j - i + 1 == k)
            {
                if (cnt == 0)
                    return true;

                if (mp.find(s2[i]) != mp.end())
                {
                    ++mp[s2[i]];
                    if (mp[s2[i]] == 1)
                        ++cnt;
                }
                ++i;
                ++j;
            }
        }
        return false;
    }
};