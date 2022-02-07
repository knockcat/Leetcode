// 1704.✅ Determine if String Halves Are Alike

class Solution
{
    bool isvowel(char ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }

public:
    bool halvesAreAlike(string s)
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            if (i < s.size() / 2)
            {
                if (isvowel(s[i]))
                    cnt++;
            }
            else
            {
                if (isvowel(s[i]))
                    cnt--;
            }
        }
        return cnt == 0;
    }
};
