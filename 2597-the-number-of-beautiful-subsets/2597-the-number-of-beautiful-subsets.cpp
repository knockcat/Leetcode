class Solution {
public:
    
    void helper(int idx, vector<int>& nums, unordered_map<int,int>& mp, int k, int& ans)
    {
        if(idx == nums.size())
        {
            ++ans;
        }
        else
        {
            if(!mp[nums[idx] - k] and !mp[nums[idx] + k])
            {
                ++mp[nums[idx]];
                helper(idx+1, nums,mp, k, ans);
                --mp[nums[idx]];
            }
            helper(idx+1,nums,mp,k,ans);
        }
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        
        int ans = 0;
        unordered_map<int,int> mp;
        
        helper(0,nums,mp,k,ans);
        
        return ans-1;
    }
};