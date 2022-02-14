// 462.✅ Minimum Moves to Equal Array Elements II

class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int cnt = 0;
        sort(nums.begin(), nums.end());

        int mid = (nums.size() - 1) / 2;

        for (int i = 0; i < nums.size(); ++i)
        {
            cnt += abs(nums[mid] - nums[i]);
        }

        return cnt;
    }
};
