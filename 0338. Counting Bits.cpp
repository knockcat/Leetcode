338. Counting Bits

    class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int sum = 0;
            int num = i;
            while (num != 0)
            {
                sum += num % 2;
                num = num / 2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

// Another Approach

class Solution
{
public:
    vector<int> countBits(int n)
    {

        // n+1 as we are going to count from 0 to n
        vector<int> t(n + 1);

        // t[0] will be 0 beacuse 0 has count of set bit is 0;
        t[0] = 0;

        // we can compute current set bit count using previous count
        // as x/2 in O(1) time

        // i%2 will be 0 for even number ans 1 for odd number

        for (int i = 1; i <= n; ++i)
            t[i] = t[i / 2] + i % 2;

        return t;
    }
};