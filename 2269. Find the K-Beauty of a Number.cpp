// 2269.✅ Find the K-Beauty of a Number

class Solution
{
public:
    int divisorSubstrings(int num, int k)
    {
        string str = to_string(num);
        int i = 0, j = 0, n = str.length();
        int ind = 0;

        while (j < n)
        {
            if (j - i + 1 < k)
            {
                ++j;
            }
            else if (j - i + 1 == k)
            {
                string s = str.substr(i, k);
                int n = stoi(s);
                if (n != 0 && num % n == 0)
                    ++ind;

                ++i;
                ++j;
            }
        }

        return ind;
    }
};