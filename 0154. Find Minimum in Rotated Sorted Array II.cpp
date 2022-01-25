// 154.✅ Find Minimum in Rotated Sorted Array II

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
            mid = low + (high - low) / 2;

            if (nums[mid] > nums[high])
            {
                low = mid + 1;
            }
            else if (nums[mid] < nums[high])
            {
                high = mid;
            }
            else
                high--; // when equal
        }
        return nums[low];
    }
};

/*

class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];

        for(int i = 1; i<nums.size(); i++)
        {
            if(min > nums[i])
                min = nums[i];
        }
        return min;
    }
};

*/