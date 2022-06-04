// 2270.✅ Number of Ways to Split Array

class Solution
{
public:
    int waysToSplitArray(vector<int> &nums)
    {

        // long long sum = accumulate(nums.begin(),nums.end(),0);
        long long sum = 0;

        for (int i = 0; i < nums.size(); ++i)
            sum += nums[i];

        long long ind = 0;
        long long i = 0, t = 0;

        while (i < nums.size() - 1)
        {
            sum -= nums[i];
            t += nums[i];

            if (t >= sum)
                ++ind;
            ++i;
        }
        return ind;
    }
};