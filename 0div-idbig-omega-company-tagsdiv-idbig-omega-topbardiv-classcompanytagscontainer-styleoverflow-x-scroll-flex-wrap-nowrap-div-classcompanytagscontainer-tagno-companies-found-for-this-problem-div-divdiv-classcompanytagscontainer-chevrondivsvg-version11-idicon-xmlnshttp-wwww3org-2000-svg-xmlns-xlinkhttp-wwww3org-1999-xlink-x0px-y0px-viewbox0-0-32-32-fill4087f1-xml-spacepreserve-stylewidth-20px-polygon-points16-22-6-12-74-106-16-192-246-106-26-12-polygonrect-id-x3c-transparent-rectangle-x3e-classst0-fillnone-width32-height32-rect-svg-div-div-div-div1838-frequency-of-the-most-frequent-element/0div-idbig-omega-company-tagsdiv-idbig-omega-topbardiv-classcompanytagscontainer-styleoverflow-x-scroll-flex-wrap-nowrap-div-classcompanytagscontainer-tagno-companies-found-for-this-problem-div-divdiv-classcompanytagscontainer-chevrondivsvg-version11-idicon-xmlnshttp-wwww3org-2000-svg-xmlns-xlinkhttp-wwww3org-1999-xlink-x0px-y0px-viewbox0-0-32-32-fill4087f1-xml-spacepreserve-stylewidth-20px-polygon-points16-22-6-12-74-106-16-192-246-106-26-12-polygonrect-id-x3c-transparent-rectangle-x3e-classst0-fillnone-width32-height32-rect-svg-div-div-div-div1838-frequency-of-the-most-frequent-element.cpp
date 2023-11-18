class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        long long currSum = 0;
        
        int i = 0, j = 0, n = nums.size();
        
        int ans = 0;
        
        sort(nums.begin(), nums.end());
        
        while(j < n)
        {
            currSum += nums[j];
            
            int cnt = j - i + 1;
            
            long long windowSum = cnt * 1LL * nums[j];
          
            if(windowSum - currSum > k)
            {
                windowSum -= nums[j];
                currSum -= nums[i++];
            }

            ans = max(ans, (j-i+1));
            
            ++j; 
        }
        return ans;
    }
};