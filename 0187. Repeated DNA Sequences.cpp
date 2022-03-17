// 187.✅ Repeated DNA Sequences

class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        map<string, int> m;
        vector<string> ans;

        if (s.length() <= 10)
            return ans;

        for (int i = 0; i <= s.length() - 10; ++i)
        {
            string a = s.substr(i, 10); // substring of 10 character long
            ++m[a];
        }

        for (auto i : m)
        {
            if (i.second > 1)
                ans.push_back(i.first);
        }

        return ans;
    }
};