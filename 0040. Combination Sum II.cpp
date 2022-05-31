// 40.✅ Combination Sum II

class Solution
{
public:
    void helper(vector<int> candidates, int target, vector<vector<int>> &res, vector<int> v, int ind)
    {
        if (target == 0)
        {
            res.push_back(v);
            return;
        }
        for (int i = ind; i < candidates.size(); ++i)
        {
            if (i > ind && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            if (candidates[i] > target)
                break;
            v.push_back(candidates[i]);
            helper(candidates, target - candidates[i], res, v, i + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> v;

        helper(candidates, target, res, v, 0);

        return res;
    }
};