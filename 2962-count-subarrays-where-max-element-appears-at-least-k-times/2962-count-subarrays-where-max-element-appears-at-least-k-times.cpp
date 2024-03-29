class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int maxElement = *max_element(nums.begin(), nums.end());
        
        int i = 0, j = 0, n = nums.size();
        
        long long cnt = 0, ans = 0;
        
        while(j < n)
        {
            if(nums[j] == maxElement)
                ++cnt;
            
            while(cnt >= k)
            {
                ans += (n-j);
                if(nums[i] == maxElement)
                    --cnt;
                ++i;
            }
            ++j;
        }
        
        return ans;
    }
};