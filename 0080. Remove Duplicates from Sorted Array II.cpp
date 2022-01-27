// 80.✅ Remove Duplicates from Sorted Array II

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() < 3)
            return nums.size();
        int j = 2;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[j - 2])
            {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};