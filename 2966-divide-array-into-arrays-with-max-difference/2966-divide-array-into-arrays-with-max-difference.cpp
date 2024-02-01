class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        if(n < 3)
            return {};
        
        vector<vector<int>> output;
        
        sort(nums.begin(), nums.end());
        
        int part = n/3;
        
        for(int i = 0; i < n-2; i += 3)
        {
            vector<int> curr;
            
            if(nums[i+1] - nums[i] <= k and nums[i+2] - nums[i+1] <= k and nums[i+2] - nums[i] <= k)
            {
                curr.push_back(nums[i]);
                curr.push_back(nums[i+1]);
                curr.push_back(nums[i+2]);
            }
            
            if(!curr.empty())
                output.push_back(curr);
        }
        
        if((int)output.size() != part)
            return {};
        return output;
    }
};