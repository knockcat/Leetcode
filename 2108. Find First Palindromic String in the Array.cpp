// 2108.✅ Find First Palindromic String in the Array

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {

        int n = words.size();

        for (int i = 0; i < n; ++i)
        {
            int l = words[i].length();
            int cnt = 0;
            for (int j = 0; j < l / 2; ++j)
            {
                if (words[i][j] == words[i][l - j - 1])
                    cnt++;
            }
            if (cnt == l / 2)
                return words[i];
        }

        return "";
    }
};