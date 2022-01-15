53. Maximum Subarray53.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
            int max_s = nums[0];
        for(int i = 1 ; i < nums.size();i++)
        {
            sum = max(nums[i], sum+nums[i]);
        
            if(sum>max_s)
            {
                max_s = sum;
            }
        }
        return max_s;
    }
};