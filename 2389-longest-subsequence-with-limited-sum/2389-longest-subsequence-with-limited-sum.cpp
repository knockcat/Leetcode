class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
         
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        
        for(int i = 1; i<n; ++i)
            nums[i] += nums[i-1];
        
        for(auto itr : queries)
        {
            ans.push_back(upper_bound(nums.begin(),nums.end(),itr) - nums.begin());
        }
        
        return ans;
    }
};