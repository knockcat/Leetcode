// 1780.✅ Check if Number is a Sum of Powers of Three

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n)
        {
            if (n % 3 == 2)
                return false;
            n /= 3;
        }

        return true;
    }
};