class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size(), sum = 0;
        
        vector<int> v(k,0);
        
        for(int i = 0; i < n; ++i)
        {
            sum +=  (nums[i]%k + k)%k;
            ++v[sum%k];
        }
        
        int ans = v[0];
        
        for(auto itr : v)
            ans += (itr * (itr-1))/2;

        return ans;
        
    }
};