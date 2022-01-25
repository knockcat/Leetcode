// 153.✅ Find Minimum in Rotated Sorted Array

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high])
                low = mid + 1;
            else if (nums[mid] < nums[high])
                high = mid;
            else
                high--; // when equal
        }

        return nums[low];
    }
};