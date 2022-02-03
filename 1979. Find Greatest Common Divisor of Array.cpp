// 1979.✅ Find Greatest Common Divisor of Array

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {

        int small = *max_element(nums.begin(), nums.end());
        int big = *min_element(nums.begin(), nums.end());

        int gcd = 1;

        for (int i = 1; i <= small && i <= big; ++i)
        {
            if (small % i == 0 && big % i == 0)
                gcd = i;
        }

        return gcd;
    }
};