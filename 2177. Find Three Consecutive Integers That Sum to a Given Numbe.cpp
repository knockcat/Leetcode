// 2177.✅ Find Three Consecutive Integers That Sum to a Given Number

class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {

        vector<long long> v;

        long long x = num / 3;

        if ((x + 1) + x + (x - 1) == num)
        {
            v.push_back(x - 1);
            v.push_back(x);
            v.push_back(x + 1);
        }

        return v;
    }
};