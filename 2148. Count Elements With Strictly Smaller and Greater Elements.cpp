// 2148.✅ Count Elements With Strictly Smaller and Greater Elements

class Solution
{
public:
    int countElements(vector<int> &nums)
    {

        int ind = 0;

        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            if (mx > nums[i] && mn < nums[i])
                ++ind;
        }

        return ind;
    }
};