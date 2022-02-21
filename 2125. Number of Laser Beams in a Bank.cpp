// 2125.✅ Number of Laser Beams in a Bank

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        vector<int> v;

        for (string b : bank)
        {
            int cnt = 0;
            for (int i = 0; i < b.size(); ++i)
            {
                if (b[i] == '1')
                    ++cnt;
            }
            if (cnt > 0)
                v.push_back(cnt);
        }

        int res = 0;
        for (int i = 1; i < v.size(); ++i)
        {
            res += v[i] * v[i - 1];
        }
        return res;
    }
};