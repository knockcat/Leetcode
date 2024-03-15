class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n, 1);
        
        int pref = 1, suff = 1;
        
        for(int i = 0; i < n; ++i)
        {
            ans[i] *= pref;
            pref *= nums[i];
        }
        
        for(int i = n-1; i >= 0; --i)
        {
            ans[i] *= suff;
            suff *= nums[i];
        }
        
        return ans;
        
    }
};