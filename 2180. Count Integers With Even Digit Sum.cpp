// 2180.✅ Count Integers With Even Digit Sum

class Solution
{
public:
    int sumdigit(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countEven(int num)
    {

        int cnt = 0;

        for (int i = 2; i <= num; ++i)
        {
            if (sumdigit(i) % 2 == 0)
                ++cnt;
        }
        return cnt;
    }
};