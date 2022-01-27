// 507. Perfect Number

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
            return true;
        return false;
    }
};