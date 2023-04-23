class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int mod = 1e9 + 7;
        
        vector<vector<int>> ans;
        
        set<vector<int>> used;
        
        sort(begin(nums), end(nums));
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = i+1; j < n; ++j)
            {
                int k = j+1, l = n-1;
                
                while(k < l)
                {
                    long long sum = (((((nums[i] % mod) + nums[j])%mod + nums[k])% mod + nums[l])% mod) % mod;
                    
                    if(sum == target)
                    {
                        used.insert({nums[i], nums[j], nums[k], nums[l]});
                        ++k,--l;
                    }
                    else if(sum < target)
                        ++k;
                    else
                        --l;
                }
            }
        }
        
        for(auto itr : used)
            ans.push_back(itr);
            
        return ans;
    }
};