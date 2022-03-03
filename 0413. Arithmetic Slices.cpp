class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        // if nums size is less than 3 return false
        if (nums.size() < 3)
            return 0;

        int cnt = 0, diff;

        for (int i = 0; i < nums.size() - 2; ++i)
        {
            // storing diff of first 2 elements
            diff = nums[i + 1] - nums[i];

            // checking for consecutive elements with same difference.
            for (int j = i + 2; j < nums.size(); ++j)
            {
                // if we find the same diff of next 2 elements
                // this means we  find consecutive elements
                // increase the Count
                if (nums[j] - nums[j - 1] == diff)
                    ++cnt;
                else
                    // break as we need to cnt for consecutive diff elements
                    break;
            }
        }
        // return cnt
        return cnt;
    }
};

class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        if (nums.size() < 3)
            return 0;

        int cnt = 0, diff = 0, ind = 0;
        int prev_diff = nums[1] - nums[0];

        for (int i = 1; i < nums.size() - 1; ++i)
        {
            // curr difference
            int diff = nums[i + 1] - nums[i];

            // if we find same diff of consecutive elements
            // increase count
            if (diff == prev_diff)
                ++ind;

            else
            {
                // update prev diff with curr diff
                // as we don't find consecutive elements with same diff
                prev_diff = diff;
                ind = 0; // make ind to 0
            }

            // add cosecutive arithmetic sequence cnt
            cnt += ind;
        }

        return cnt;
    }
};