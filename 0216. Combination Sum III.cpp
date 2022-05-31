// 216.✅ Combination Sum III

class Solution
{
public:
    void helper(int k, int n, vector<vector<int>> &res, vector<int> v, int ind)
    {
        if (k <= 0)
        {
            if (n == 0)
            {
                res.push_back(v);
            }
            return;
        }
        for (int i = ind; i <= 9; ++i)
        {
            v.push_back(i);
            helper(k - 1, n - i, res, v, i + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> res;
        vector<int> v;

        helper(k, n, res, v, 1);

        return res;
    }
};