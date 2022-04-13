// 441.✅ Arranging Coins

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int start = 1, end = 1e5;
        long long int ind = -1;

        while (start <= end)
        {
            long long int mid = start + (end - start) / 2;
            if (mid * (mid + 1) / 2 <= n)
            {
                start = mid + 1;
                ind = max(ind, mid);
            }
            else
                end = mid - 1;
        }
        return ind;
    }
};

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int i = 1, sum = 0, ind = 0;

        while (sum < n)
        {
            sum = i * (i + 1) / 2;
            if (sum <= n)
                ++ind;
            ++i;
        }

        return ind;
    }
};