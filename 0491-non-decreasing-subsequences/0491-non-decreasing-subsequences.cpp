class Solution {
public:
    
    void helper(int idx, vector<int>& ds, vector<vector<int>>& res,vector<int>& nums, int prev)
    {
        if(idx >= nums.size())
        {
            if(ds.size() >= 2)
                res.push_back(ds);
            return;
        }
        
        if(prev == -1 or nums[prev] <= nums[idx])
        {
            ds.push_back(nums[idx]);
            helper(idx+1,ds,res,nums, idx);
            ds.pop_back();
        }
        helper(idx+1, ds, res, nums, prev);
    }
    
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
    
        vector<int> ds;
        vector<vector<int>> res;
        
        helper(0,ds,res,nums,-1);
        
        set<vector<int>> s(res.begin(),res.end());
        
        vector<vector<int>> ans(s.begin(),s.end());

        return ans;
        
    }
};