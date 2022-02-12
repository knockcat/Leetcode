// 2047.✅ Number of Valid Words in a Sentence

class Solution
{

    bool check(string s)
    {
        for (auto i : s)
        {
            if (i >= '0' && i <= '9')
                return false;
        }

        int hyphen = 0;
        for (auto i : s)
            if (i == '-')
                ++hyphen;

        if (hyphen >= 2)
            return false;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '-')
            {
                if (i == 0)
                    return false;
                if (i == s.length() - 1)
                    return false;
                if (s[i - 1] < 'a' || s[i - 1] > 'z' || s[i + 1] < 'a' || s[i + 1] > 'z')
                    return false;
            }
        }

        int pun = 0;

        for (auto i : s)
        {
            if (i == '!' || i == ',' || i == '.')
                ++pun;
        }

        if (pun >= 2)
            return false;

        if (pun == 1 && (s[s.length() - 1] != '!' && s[s.length() - 1] != ',' && s[s.length() - 1] != '.'))
            return false;

        return true;
    }

public:
    int countValidWords(string sentence)
    {
        string word = "";
        int cnt = 0;

        sentence.push_back(' ');

        int n = sentence.size();

        for (int i = 0; i < n; ++i)
        {
            if (sentence[i] == ' ')
            {
                if (word != "")
                {
                    if (check(word))
                        ++cnt;
                }
                word = "";
            }

            else
            {
                word += (char)sentence[i];
            }
        }
        return cnt;
    }
};