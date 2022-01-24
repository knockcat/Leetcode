// 520.✅ Detect Capital

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int cnt = 0;
        for (int i = 0; i < word.length(); i++) // case 1 for all capital letters
        {
            if (word[i] >= 65 && word[i] <= 90)
            {
                cnt++;
            }
        }
        if (cnt == word.length())
            return true;

        cnt = 0;
        for (int i = 0; i < word.length(); i++) // case 2 for all small letters
        {
            if (word[i] >= 97 && word[i] <= 122)
            {
                cnt++;
            }
        }
        if (cnt == word.length())
            return true;

        cnt = 0;
        for (int i = 0; i < word.length() - 1; i++) // case 3 for first letter of word capital rest small
        {
            if (word[0] >= 65 && word[0] <= 90 && word[i + 1] >= 97 && word[i + 1] <= 122)
            {
                cnt++;
            }
        }
        if (cnt + 1 == word.length()) // loop running to length-1 therefore cnt is incremented
            return true;

        return false; // if none of the case match
    }
};