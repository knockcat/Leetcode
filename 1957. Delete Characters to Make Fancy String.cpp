// 1957.✅ Delete Characters to Make Fancy String

class Solution
{
public:
    string ans = "";
    string makeFancyString(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1] || s[i] != s[i + 2])
                ans += s[i];
        }
        return ans;
    }
};