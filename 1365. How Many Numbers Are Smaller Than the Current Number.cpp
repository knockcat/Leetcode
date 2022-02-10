// 1365.✅ How Many Numbers Are Smaller Than the Current Number

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> res;
        int cnt;
        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            cnt = 0;
            for (int j = 0; j < nums.size(); ++j)
            {
                if (nums[j] != nums[i] && nums[j] < nums[i])
                    ++cnt;
            }
            res.push_back(cnt);
        }
        return res;
    }
};