// 75.✅ Sort Colors

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zero = 0, start = 0, end = nums.size() - 1;

        while (start <= end)
        {
            if (nums[start] == 0)
                swap(nums[start++], nums[zero++]);
            else if (nums[start] == 2)
                swap(nums[end--], nums[start]);
            else
                ++start;
        }
    }
};

// Bad Solution
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};