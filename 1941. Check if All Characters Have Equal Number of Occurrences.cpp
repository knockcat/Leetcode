// 1941.✅ Check if All Characters Have Equal Number of Occurrences

class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        map<char, int> m;

        for (auto c : s)
            ++m[c];

        int a = m[s[0]];

        for (auto i : m)
        {
            if (a != i.second)
                return false;
        }

        return true;
    }
};
