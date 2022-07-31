// 916. Word Subsets

class Solution
{
public:
    bool check(unordered_map<char, int> m, unordered_map<char, int> mp, string str)
    {
        for (int i = 0; i < str.size(); ++i)
        {
            if (mp[str[i]] < m[str[i]])
                return false;
        }
        return true;
    }

    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {

        vector<string> ans;

        unordered_map<char, int> m;
        for (auto itr : words2)
        {
            unordered_map<char, int> m1;
            for (auto x : itr)
            {
                ++m1[x];
                m[x] = max(m[x], m1[x]);
            }
        }

        string str = "";
        for (auto itr : m)
        {
            for (int i = 0; i < itr.second; ++i)
                str += itr.first;
        }

        cout << str;

        // unordered_map<char,int> mp = generate(str);

        for (int i = 0; i < words1.size(); ++i)
        {
            unordered_map<char, int> mp;
            for (auto itr : words1[i])
                ++mp[itr];

            if (check(m, mp, str))
                ans.push_back(words1[i]);
        }

        return ans;
    }
};

class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {

        vector<int> freq(26, 0);

        for (auto itr : words2)
        {
            vector<int> temp(26, 0);
            for (auto x : itr)
            {
                ++temp[x - 'a'];
                freq[x - 'a'] = max(temp[x - 'a'], freq[x - 'a']);
            }
        }

        vector<string> ans;

        for (auto itr : words1)
        {
            vector<int> temp(26, 0);
            for (auto x : itr)
                ++temp[x - 'a'];

            bool flag = true;

            for (int i = 0; i < 26; ++i)
            {
                if (freq[i] > temp[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back(itr);
        }
        return ans;
    }
};
