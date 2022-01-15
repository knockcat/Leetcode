283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                int j = i;
                while(nums[j] == 0 && j<nums.size() - 1)
                {
                    j++;
                }
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        
    }
};