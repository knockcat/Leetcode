// 682.✅ Baseball Game

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> v;
        int j = -1;
        for (int i = 0; i < ops.size(); ++i)
        {
            if (ops[i] == "+")
            {
                v.push_back(v[j] + v[j - 1]);
                ++j;
            }
            else if (ops[i] == "D")
            {
                v.push_back(2 * v[j]);
                ++j;
            }
            else if (ops[i] == "C")
            {
                v.pop_back();
                --j;
            }
            else
            {
                v.push_back(stoi(ops[i]));
                ++j;
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};