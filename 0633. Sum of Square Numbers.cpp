// 633.✅ Sum of Square Numbers

class Solution
{
public:
    bool judgeSquareSum(int c)
    {

        if (c < 0)
            return false;
        long int start = 0;
        long int end = sqrt(c);

        while (start <= end)
        {
            long int curr = start * start + end * end;
            if (curr < c)
                ++start;
            else if (curr > c)
                --end;
            else
                return true;
        }

        return false;
    }
};