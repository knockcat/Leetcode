// 2085.✅ Count Common Words With One Occurrence

class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        int cnt = 0;
        map<string, int> m, m1;

        for (string word : words1)
        {
            m[word]++;
        }
        for (string word : words2)
        {
            m1[word]++;
        }

        for (string word : words1)
        {
            if (m[word] == 1 && m1[word] == 1)
                cnt++;
        }

        return cnt;
    }
};