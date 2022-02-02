// 2062. Count Vowel Substrings of a String

class Solution
{
public:
    bool(isVowel(char c))
    {
        return c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u';
    }

    int countVowelSubstrings(string word)
    {
        int ans = 0;
        int n = word.length();
        unordered_map<char, int> cnt;

        for (int i = 0; i < n; ++i)
        {
            cnt.clear();
            for (int j = i; j < n && isVowel(word[j]); ++j)
            {
                ++cnt[word[j]];
                if (cnt.size() == 5)
                    ++ans;
            }
        }
        return ans;
    }
};