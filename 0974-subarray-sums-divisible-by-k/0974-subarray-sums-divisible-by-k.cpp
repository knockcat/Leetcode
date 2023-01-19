class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int sum = 0, n = nums.size();
        vector<int> cnt(k,0);
        
        for(auto itr : nums)
        {
            sum += (itr % k + k) % k;
            ++cnt[sum%k];
        }
        
        int res = cnt[0];
        for(auto itr : cnt)
        {
            res += (itr * (itr - 1))/2;
        }
        return res;
    }
};