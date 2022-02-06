// 747.✅ Largest Number At Least Twice of Others

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int mx = *max_element(nums.begin(), nums.end()); // returns max element

        for (int i = 0; i < nums.size(); i++)
        {
            if (mx < nums[i] * 2 && mx != nums[i]) // as we donot have to check the max element therefor mx != nums[i]
                return -1;
        }
        return max_element(nums.begin(), nums.end()) - nums.begin(); // returns max element index
    }
};