class Solution {
public:
    
    const int mod = 1e9 + 7;
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = i+1; j < n; ++j)
            {
                int k = j+1, l = n-1;
                
                while(k < l)
                {
                    long long sum = (((((nums[i] % mod) + nums[j])% mod + nums[k])%mod + nums[l])%mod)%mod;
                    
                    if(sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        ++k, --l;
                    }
                    else if(sum > target)
                    {
                        --l;
                    }
                    else
                    {
                        ++k;
                    }
                }
            }
        }
        
        sort(ans.begin(), ans.end());
        
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        return ans;
    }
};