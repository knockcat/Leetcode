class Solution {

private:
    void helper(int idx, int n, int k, vector<int> ds, vector<vector<int>>& ans)
    {
        if(ds.size() == k)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i = idx; i <= n; ++i)
        {
            ds.push_back(i);
            helper(i+1, n, k, ds, ans);
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> ds;
        
        vector<vector<int>> ans;
        
        helper(1, n, k, ds, ans);
        
        return ans;
        
    }
};