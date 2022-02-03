// 1967.✅ Number of Strings That Appear as Substrings in Word

class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int cnt = 0;

        for (int i = 0; i < patterns.size(); ++i)
        {
            if (word.find(patterns[i]) != -1)
                cnt++;
        }
        return cnt;
    }
};