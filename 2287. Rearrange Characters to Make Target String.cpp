// 2287.✅ Rearrange Characters to Make Target String

class Solution
{
public:
    int rearrangeCharacters(string s, string target)
    {
        unordered_map<char, int> m1, m2;

        int mn = INT_MAX;
        for (auto itr : s)
            ++m1[itr];
        for (auto itr : target)
            ++m2[itr];
        for (auto itr : m2)
            mn = min(mn, m1[itr.first] / itr.second);

        return mn;
    }
};
