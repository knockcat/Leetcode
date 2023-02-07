class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i = 1, j = n;
        while(i < nums.size() and j < nums.size())
        {
            int k = i;
            while(i < j)
                swap(nums[i++],nums[j]);
            i = k + 2;
            ++j;
        }
        return nums;
    }
};