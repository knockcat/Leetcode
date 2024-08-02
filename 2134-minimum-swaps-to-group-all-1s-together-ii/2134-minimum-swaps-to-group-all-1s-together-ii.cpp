class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int n = nums.size();
        int cnt = 0;
        
        for(auto& ele : nums)
            cnt += ele;
        
        for(int i = 0; i < n; ++i)
            nums.push_back(nums[i]);
        
        int ans = INT_MAX, curCnt = 0, j = 0, i = 0;
        
        while(j < 2*n)
        {
            curCnt += nums[j];
            
            if(j - i + 1 == cnt)
            {
                ans = min(ans, cnt - curCnt);
                curCnt -= nums[i++];
            }
            ++j;
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};