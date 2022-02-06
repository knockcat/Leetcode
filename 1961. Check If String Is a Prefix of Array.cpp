// 1961.✅ Check If String Is a Prefix of Array

class Solution
{
public:
    string str = "";
    bool isPrefixString(string s, vector<string> &words)
    {
        for (int i = 0; i < words.size(); ++i)
        {
            str += words[i];
            if (str == s)
                return true;
        }
        return false;
    }
};