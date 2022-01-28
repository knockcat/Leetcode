// 202.✅ Happy Number

// The sum of squares of digits always ends in 1 or 89.
// For example,

// 44 → 32 → 13 → 10 → 1 → 1
// 85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
// Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop.

class Solution
{
public:
    bool isHappy(int n)
    {

        while (n != 1)
        {
            int newtemp = 0;
            while (n > 0)
            {
                int rem = n % 10;
                newtemp += rem * rem;
                n = n / 10;
            }
            n = newtemp;

            if (newtemp == 89)
                return false;
        }

        return n == 1;
    }
};