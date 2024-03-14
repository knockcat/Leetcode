class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int ans = 0, n = nums.size();
     
        map<int, int> mp;
        mp.insert({0, 1});

        int sum = 0;

        for(int j = 0; j < n; ++j)
        {
            sum += nums[j];
            if(mp.find(sum - goal) != mp.end())
            {
                ans += mp[sum - goal];
            }

            ++mp[sum];
        }
        
        return ans;
    }
};
