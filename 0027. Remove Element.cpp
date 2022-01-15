// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ind = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[ind] = nums[i];
                ind += 1;
            }
        }
        return ind;
    }
};