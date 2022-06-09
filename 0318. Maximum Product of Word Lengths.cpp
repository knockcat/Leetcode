// 318.✅ Maximum Product of Word Lengths

class Solution
{
public:
    vector<int> out;
    int maxProduct(vector<string> &words)
    {

        int prod, maxprod = 0, cnt = 0;

        for (int i = 0; i < words.size(); ++i)
        {
            map<char, int> m;
            for (auto itr : words[i])
                ++m[itr];

            for (int j = i + 1; j < words.size(); ++j)
            {
                cnt = 0;
                for (auto s : words[j])
                {
                    if (m.find(s) != m.end())
                        break;
                    ++cnt;
                }
                if (cnt == words[j].size())
                {
                    prod = words[i].size() * words[j].size();
                    maxprod = max(maxprod, prod);
                }
            }
        }

        return maxprod;
    }
};