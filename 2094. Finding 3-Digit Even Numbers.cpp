// 2094.✅ Finding 3-Digit Even Numbers

class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        set<int> s;
        vector<int> ans;

        for (int i = 0; i < digits.size(); ++i)
        {
            if (digits[i] == 0)
                continue;
            for (int j = 0; j < digits.size(); ++j)
            {
                for (int k = 0; k < digits.size(); ++k)
                {
                    if (i != j && j != k && k != i)
                    {
                        int res = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (res % 2 == 0)
                            s.insert(res);
                    }
                }
            }
        }

        for (auto i : s)
            ans.push_back(i);

        return ans;
    }
};