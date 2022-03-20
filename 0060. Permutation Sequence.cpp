// 60.✅ Permutation Sequence

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        int num = 0;

        for (int i = 1; i <= n; ++i)
            num = num * 10 + i;

        string s = to_string(num);

        k--;
        while (k--)
        {
            next_permutation(s.begin(), s.end());
        }

        return s;
    }
};