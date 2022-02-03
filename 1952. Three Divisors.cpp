// 1952.✅ Three Divisors

class Solution
{
public:
    bool isThree(int n)
    {
        int cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (n % i == 0)
                ++cnt;
        }
        if (cnt == 3)
            return true;

        return false;
    }
};