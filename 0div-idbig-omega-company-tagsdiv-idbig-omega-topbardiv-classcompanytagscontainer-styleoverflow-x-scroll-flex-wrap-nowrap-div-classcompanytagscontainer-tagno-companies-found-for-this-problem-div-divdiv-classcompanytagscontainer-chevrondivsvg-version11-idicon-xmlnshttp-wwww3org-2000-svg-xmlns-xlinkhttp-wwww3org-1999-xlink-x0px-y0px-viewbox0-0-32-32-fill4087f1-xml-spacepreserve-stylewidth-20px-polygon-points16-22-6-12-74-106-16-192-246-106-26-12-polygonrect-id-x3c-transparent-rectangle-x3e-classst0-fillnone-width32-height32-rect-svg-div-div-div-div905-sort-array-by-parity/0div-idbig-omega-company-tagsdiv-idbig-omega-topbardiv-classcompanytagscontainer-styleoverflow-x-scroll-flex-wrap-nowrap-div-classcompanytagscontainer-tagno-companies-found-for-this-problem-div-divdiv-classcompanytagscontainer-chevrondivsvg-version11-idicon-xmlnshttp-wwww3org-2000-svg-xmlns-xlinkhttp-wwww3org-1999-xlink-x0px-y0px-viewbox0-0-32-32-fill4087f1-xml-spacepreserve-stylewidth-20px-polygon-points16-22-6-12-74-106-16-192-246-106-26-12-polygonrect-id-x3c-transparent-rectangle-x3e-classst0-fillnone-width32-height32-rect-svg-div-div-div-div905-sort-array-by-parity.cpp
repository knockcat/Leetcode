class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        
        int start = 0, end = n-1;
        
        while(start < end)
        {
            if(nums[start] & 1)
            {
                swap(nums[start], nums[end--]);
            }
            else
                ++start;
        }
        
        return nums;
        
    }
};