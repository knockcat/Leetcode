class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
     
        int n = nums.size();
        
        map<int, int> mp;
        
        for(int i = 0; i < n/2; ++i)
        {
            int diff = abs(nums[i] - nums[n-i-1]);
            int maxDiff = max(k - min(nums[i], nums[n-i-1]), max(nums[i], nums[n-i-1]));
            ++mp[0];
            --mp[diff];
            ++mp[diff+1];
            ++mp[maxDiff + 1];
        }
        
        int ans = INT_MAX, sum = 0;
        
        for(auto&[f, e] : mp)
        {
            sum += e;
            ans = min(ans, sum);
        }
        
        return ans;
    }
};