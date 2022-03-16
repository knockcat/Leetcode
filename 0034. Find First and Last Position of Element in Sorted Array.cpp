// 34.✅ Find First and Last Position of Element in Sorted Array

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> v(2, -1);

        int l = 0, r = nums.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target)
                l = mid + 1;
            else if (nums[mid] > target)
                r = mid - 1;
            else
            {
                if (mid == l || nums[mid] != nums[mid - 1])
                {
                    v[0] = mid;
                    break;
                }
                else
                {
                    r = mid - 1;
                    v[0] = mid - 1;
                }
            }
        }

        l = 0, r = nums.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target)
                l = mid + 1;
            else if (nums[mid] > target)
                r = mid - 1;
            else
            {
                if (mid == r || nums[mid] != nums[mid + 1])
                {
                    v[1] = mid;
                    break;
                }
                else
                {
                    l = mid + 1;
                    v[1] = mid + 1;
                }
            }
        }
        return v;
    }
};

// another appraoch
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> v(2, -1);

        if (nums.size() == 0)
            return v;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == target)
            {
                v[0] = i;
                break;
            }
        }

        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (nums[i] == target)
            {
                v[1] = i;
                break;
            }
        }
        return v;
    }
};