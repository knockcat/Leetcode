// 1995.✅ Count Special Quadruplets

class Solution
{
public:
    int countQuadruplets(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size() - 3; ++i)
        {
            for (int j = i + 1; j < nums.size() - 2; ++j)
            {
                for (int k = j + 1; k < nums.size() - 1; ++k)
                {
                    for (int l = k + 1; l < nums.size(); ++l)
                    {
                        if (nums[i] + nums[j] + nums[k] == nums[l])
                            cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};