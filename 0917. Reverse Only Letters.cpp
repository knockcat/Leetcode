// 917.✅ Reverse Only Letters

class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        string str;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
                str.push_back(s[i]);
        }

        reverse(str.begin(), str.end());
        int j = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = str[j];
                ++j;
            }
        }

        return s;
    }
};

// another approach
class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int start = 0, end = s.size() - 1;

        while (start < end)
        {
            while (start < end && !isalpha(s[start]))
                ++start;
            while (start < end && !isalpha(s[end]))
                --end;
            swap(s[start++], s[end--]);
        }

        return s;
    }
};