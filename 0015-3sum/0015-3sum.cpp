class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> s;
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {
            int j = i+1, k = n-1;
            
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if((sum) == 0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    ++j,--k;
                }
                else if(sum < 0)
                    ++j;
                else
                    --k;
            }
        }
        
        for(auto itr : s)
            ans.push_back(itr);
        
        return ans;
    }
};