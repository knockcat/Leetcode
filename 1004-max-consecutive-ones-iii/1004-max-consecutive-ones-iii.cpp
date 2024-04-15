class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int i = 0, j = 0, zeroCnt = 0, ans = 0;
        
        while(j < n)
        {
            zeroCnt += (nums[j] == 0 ? 1 : 0);
            
            while(zeroCnt > k)
            {
                zeroCnt -= (nums[i] == 0 ? 1 : 0);
                ++i;
            }
            
            ans = max(ans, j - i + 1);
            
            ++j;
        }
        
        return ans;
    }
};