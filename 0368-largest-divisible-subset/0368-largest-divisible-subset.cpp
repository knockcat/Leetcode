class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n = nums.size();
     
        vector<int> dp(n+1,1);
        vector<int> hash(n);
        int lastIndex = -1;
        int res = 1;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<n; ++i)
        {
            hash[i] = i;
            for(int j = 0; j < i; ++j)
            {
                if(nums[i] % nums[j] == 0 and dp[j] + 1 > dp[i])
                {
                   dp[i] = dp[j] + 1;
                   hash[i] = j;
                }
            }
            if(dp[i] > res)
            {
                lastIndex = i;
                res =  dp[i];
            }
        }
        if(res == 1)
            return {nums[0]};
        vector<int> ans;
        ans.push_back(nums[lastIndex]);
        
        while(hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            ans.push_back(nums[lastIndex]);
        }
        
        return ans;
    }
};