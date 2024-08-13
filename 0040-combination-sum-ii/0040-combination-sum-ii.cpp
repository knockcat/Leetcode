class Solution {
public:
    
    void helper(int idx, int target, vector<int> ds, vector<vector<int>>& res, vector<int>& candidates)
    {
        if(target == 0)
        {
            res.push_back(ds);
            return;
        }
        
        for(int i = idx; i < candidates.size(); ++i)
        {
            if(i != idx and candidates[i] == candidates[i-1])
                continue;
            if(target - candidates[i] < 0)
                break;
            ds.push_back(candidates[i]);
            helper(i+1, target-candidates[i], ds, res, candidates);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<int> ds;
        vector<vector<int>> res;
        
        sort(candidates.begin(), candidates.end());
        
        helper(0, target, ds, res, candidates);
        
        return res;
        
    }
};