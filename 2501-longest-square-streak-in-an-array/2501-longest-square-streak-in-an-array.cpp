class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<long long,long long> mp;
        
        for(auto itr : nums)
            ++mp[itr];
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        
        for(int i = 0; i<n; ++i)
        {
            long long val = nums[i];
            int count = 1;
            while(true)
            {
                long long sqr = (long long) val * val;
                if(mp.find(sqr) == mp.end())
                    break;
                else
                {
                    ++count;
                    val = sqr;
                }
                ans = max(ans,count);
            }
        }
        
        if(ans < 2)
            return -1;
        return ans;
    }
};