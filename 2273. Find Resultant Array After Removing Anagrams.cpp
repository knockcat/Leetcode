class Solution
{
public:
    bool isAnag(string as, string vs)
    {

        int n = as.length();
        int m = vs.length();

        if (n != m)
            return false;

        sort(as.begin(), as.end());
        sort(vs.begin(), vs.end());

        for (int i = 0; i < n; i++)
            if (as[i] != vs[i])
                return false;

        return true;
    }

    vector<string> removeAnagrams(vector<string> &words)
    {
        for (int k = 1; k < words.size(); ++k)
        {
            if (isAnag(words[k], words[k - 1]))
            {
                words.erase(words.begin() + k);
                --k;
            }
        }

        return words;
    }
};