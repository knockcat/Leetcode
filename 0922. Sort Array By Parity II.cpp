// 922.✅ Sort Array By Parity II

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int ev = 0, od = 1;
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] & 1)
            {
                res[od] = nums[i];
                od += 2;
            }
            else
            {
                res[ev] = nums[i];
                ev += 2;
            }
        }

        return res;
    }
};
