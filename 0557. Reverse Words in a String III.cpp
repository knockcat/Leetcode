// 557.✅ Reverse Words in a String III

class Solution
{
public:
    string reverseWords(string s)
    {
        int ind = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ')
            {
                reverse(s.begin() + ind, s.begin() + i);
                ind = i + 1;
            }
        }
        reverse(s.begin() + ind, s.end());
        return s;
    }
};
