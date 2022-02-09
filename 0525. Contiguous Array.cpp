// 525.✅ Contiguous Array

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return 0;

        unordered_map<int, int> cache; // (sum , index)
        int count = nums[0] == 1 ? 1 : -1;

        cache[0] = -1;    // sum
        cache[count] = 0; // value ar index 0
        int mx = 0;

        for (int i = 1; i < nums.size(); ++i)
        {
            count = (nums[i] == 1) ? count + 1 : count - 1;
            if (cache.find(count) != cache.end()) // found
                mx = max(mx, i - cache[count]);
            else
                cache[count] = i;
        }
        return mx;
    }
};