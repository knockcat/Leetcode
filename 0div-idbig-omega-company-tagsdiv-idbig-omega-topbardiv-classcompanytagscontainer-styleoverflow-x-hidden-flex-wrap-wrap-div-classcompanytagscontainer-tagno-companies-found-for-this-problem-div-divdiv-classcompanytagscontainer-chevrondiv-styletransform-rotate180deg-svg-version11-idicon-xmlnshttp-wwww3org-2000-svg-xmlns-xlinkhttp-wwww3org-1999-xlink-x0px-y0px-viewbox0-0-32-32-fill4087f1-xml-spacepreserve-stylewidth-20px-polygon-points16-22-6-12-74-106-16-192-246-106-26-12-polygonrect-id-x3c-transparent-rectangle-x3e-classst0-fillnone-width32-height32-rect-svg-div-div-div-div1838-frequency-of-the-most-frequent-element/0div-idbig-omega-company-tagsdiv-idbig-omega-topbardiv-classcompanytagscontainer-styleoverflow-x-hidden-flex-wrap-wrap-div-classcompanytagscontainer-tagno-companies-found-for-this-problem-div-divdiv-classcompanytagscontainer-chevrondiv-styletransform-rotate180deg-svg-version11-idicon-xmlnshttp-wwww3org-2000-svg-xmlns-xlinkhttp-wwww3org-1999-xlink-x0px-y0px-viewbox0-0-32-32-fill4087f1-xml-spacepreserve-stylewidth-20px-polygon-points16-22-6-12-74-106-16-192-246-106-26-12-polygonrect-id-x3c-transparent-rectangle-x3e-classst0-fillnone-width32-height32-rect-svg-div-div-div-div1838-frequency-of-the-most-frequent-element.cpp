#define ll long long int

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<long long> pref(n+1, 0);
        
        for(int i = 1; i <= n; ++i)
        {
            pref[i] = (pref[i-1] + nums[i-1]);
        }
        
        function<int(int)> calculate = [&](int targetIdx)
        {
            int ans = 0, val = nums[targetIdx];
            
            int low = 0, high = targetIdx;
            
            while(low <= high)
            {
                int mid = (low + high) >> 1;
                
                int cnt = targetIdx - mid + 1;
                
                ll windowSum = val * 1LL * cnt;
                
                ll currSum = pref[targetIdx+1] - pref[mid];
                
                if((windowSum - currSum) <= k)
                {
                    ans = max(ans, cnt);
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            
            return ans;
        };
        
        int res = 0;
        
        for(int i = 0; i < n; ++i)
        {
            res = max(res, calculate(i));
        }
        
        return res;
    }
};