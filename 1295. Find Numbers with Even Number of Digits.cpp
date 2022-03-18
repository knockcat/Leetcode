// 1295.✅ Find Numbers with Even Number of Digits

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {

        int ind = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            int a = nums[i];
            int cnt = 0;
            while (a > 0)
            {
                ++cnt;
                a /= 10;
            }
            if (cnt % 2 == 0)
                ++ind;
        }

        return ind;
    }
};