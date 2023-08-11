class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; ++i)
        {
            int j = i+1, k = n-1;
            
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                if(sum == 0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    ++j, --k;
                }
                else if(sum > 0)
                {
                    --k;
                }
                else
                {
                    ++j;
                }
            }
        }
        
        sort(ans.begin(), ans.end());
        
        ans.erase(unique(ans.begin(),ans.end()), ans.end());
        
        return ans;
    }
};