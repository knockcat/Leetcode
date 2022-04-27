// 1608.✅ Special Array With X Elements Greater Than or Equal X

class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        vector<int> v(102, 0);

        for (const auto &n : nums)
        {
            ++v[n > 100 ? 100 : n];
        }

        for (int i = 100; i > 0; --i)
        {
            v[i] += v[i + 1];
            if (v[i] == i)
                return i;
        }
        return -1;
    }
};