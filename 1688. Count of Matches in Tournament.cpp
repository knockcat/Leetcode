// 1688.✅ Count of Matches in Tournament

class Solution
{
public:
    int help(int n, int &res)
    {
        if (n == 1)
            return res;
        else
        {
            if (n % 2 == 0)
            {
                res += n / 2;
                return help(n / 2, res);
            }
            else
            {
                res += (n - 1) / 2 + 1;
                return help((n - 1) / 2, res);
            }
        }
    }

    int numberOfMatches(int n)
    {
        int res = 0;
        help(n, res);
        return res;
    }
};
