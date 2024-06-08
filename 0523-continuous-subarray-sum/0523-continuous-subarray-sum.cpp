class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        map<int,int> mp;
        mp.insert({0,-1});
        
        int total = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {
            total += nums[i];
            int rem = total % k;
            
            if(mp.find(rem) != mp.end())
            {
                if(i - mp[rem] > 1)
                    return true;
            }
            else
            {
                mp[rem] = i;
            }
        }
        return false;
    }
};