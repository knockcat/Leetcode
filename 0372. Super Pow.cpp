// 372.✅ Super Pow

class Solution
{
public:
    int superPow(int a, vector<int> &b)
    {
        long n = 0;
        for (auto itr : b)
            n = ((n * 10) + itr) % 1140;
        long ans = 1;
        long long ind = (long long)a;
        while (n)
        {
            if (n % 2 == 0)
            {
                ind = (ind * ind) % 1337;
                n /= 2;
            }
            else
            {
                ans = (ans * ind) % 1337;
                n -= 1;
            }
        }
        return ans % 1337;
    }
};
