// 2068.✅ Check Whether Two Strings are Almost Equivalent

class Solution
{
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {

        vector<int> cnt(26, 0);

        for (int i = 0; i < word1.length(); ++i) // if appear in first string increment
        {
            cnt[word1[i] - 'a']++;
        }

        for (int i = 0; i < word2.length(); ++i)
        {
            cnt[word2[i] - 'a']--; // if appears in second string decremnet
        }

        for (int i = 0; i < 26; ++i)
        {
            if (abs(cnt[i]) > 3) // absolute value of count > 3 i.e difference is greater than 4
                return false;
        }

        return true;
    }
};
