// 410. Split Array Largest Sum

class Solution
{
public:
    int canSplit(int mid, vector<int> &nums, int &m)
    {
        int sum = 0;
        int curr_sum = 0;
        for (int i : nums)
        {
            curr_sum += i;
            if (curr_sum > mid)
            {
                sum += 1;
                curr_sum = i;
            }
        }
        return (sum + 1 <= m);
    }

    int splitArray(vector<int> &nums, int m)
    {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        int res = right; // larger of two
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (canSplit(mid, nums, m))
            {
                res = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return res;
    }
};