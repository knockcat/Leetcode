// 561. Array Partition I

class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {

        int res = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2)
        {
            res += nums[i];
        }

        return res;
    }
};