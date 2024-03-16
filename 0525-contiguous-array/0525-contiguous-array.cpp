class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        map<int, int> mp;
        
        mp.insert({0, -1});
        
        int sum = 0, ans = 0, n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {
            sum += (nums[i] == 1 ? 1 : -1);
            if(mp.find(sum) != mp.end())
                ans = max(ans, i - mp[sum]);
            else
                mp[sum] = i;
        }
        
        return ans;
        
    }
};