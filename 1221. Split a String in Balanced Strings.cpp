// 1221.✅ Split a String in Balanced Strings

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int cnt = 0, ind = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'R')
                ++cnt;
            else
                --cnt;
            if (cnt == 0)
                ++ind;
        }
        return ind;
    }
};