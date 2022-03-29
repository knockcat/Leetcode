// 409.✅ Longest Palindrome

class Solution
{
public:
    int longestPalindrome(string s)
    {
        map<char, int> m;
        bool odd = 0;
        for (auto i : s)
            ++m[i];

        int ind = 0;

        for (auto i : m)
        {
            if (i.second % 2 == 0)
                ind += i.second;
            else
            {
                ind += i.second - 1;
                odd = true;
            }
        }
        if (odd)
            ind += 1;
        return ind;
    }
};