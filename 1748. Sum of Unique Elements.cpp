// 1748.✅ Sum of Unique Elements

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        map<int, int> m;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            ++m[nums[i]];
        }

        for (auto i : m)
        {
            if (i.second == 1)
                sum += i.first;
        }

        return sum;
    }
};