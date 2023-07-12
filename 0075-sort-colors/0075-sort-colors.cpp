class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int start = 0, end = nums.size()-1;
        
        int zero = 0;
        
        while(start <= end)
        {
            if(nums[start] == 2)
            {
                swap(nums[start], nums[end]);
                --end;
            }
            else if(nums[start] == 0)
            {
                swap(nums[zero++], nums[start++]);
            }
            else
                ++start;
        }
    }
};