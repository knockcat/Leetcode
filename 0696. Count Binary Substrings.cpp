// 696.✅ Count Binary Substrings

class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        int cnt = 0;
        int prev = 0, curr = 1;

        for (int i = 1; i < s.length(); ++i)
        {
            if (s[i - 1] != s[i])
            {
                cnt += min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else
                ++curr;
        }
        return cnt += min(prev, curr);
    }
};