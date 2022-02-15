// 2161.✅ Partition Array According to Given Pivot

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> ans(nums.size());

        int low = 0;
        int same = 0;
        int high;

        for (auto i : nums)
        {
            if (i < pivot)
                ++low;
            else if (i == pivot)
                ++same;
        }

        high = same + low;
        same = low;
        low = 0;

        for (auto i : nums)
        {
            if (i < pivot)
                ans[low++] = i;
            else if (i == pivot)
                ans[same++] = i;
            else
                ans[high++] = i;
        }
        return ans;
    }
};