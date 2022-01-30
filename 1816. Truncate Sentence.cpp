// 1816. Truncate Sentence

class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                cnt++;
            if (cnt == k)
                break;
            ans += s[i];
        }
        return ans;
    }
};