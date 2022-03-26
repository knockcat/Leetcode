// 162.✅ Find Peak Element

class Solution
{
public:
    int recur(vector<int> nums, int start, int end)
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;
            else if (nums[mid] < nums[mid - 1])
                return recur(nums, start, mid - 1);
            else if (nums[mid] < nums[mid + 1])
                return recur(nums, mid + 1, end);
        }

        return -1;
    }

    int findPeakElement(vector<int> &nums)
    {

        int n = nums.size();
        if (nums.size() == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;

        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        return recur(nums, 1, n - 2);
    }
};