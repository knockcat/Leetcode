// 2283.✅ Check if Number Has Equal Digit Count and Digit Value

class Solution
{
public:
    bool digitCount(string num)
    {
        string s = num;

        sort(s.begin(), s.end());
        int n = s[s.length() - 1] - '0';

        if (num.length() > n)
            n = num.length();

        cout << n;

        vector<int> v(n + 1, 0);

        for (int i = 0; i < num.length(); ++i)
            ++v[num[i] - '0'];

        for (int i = 0; i < num.length(); ++i)
        {
            if (num[i] - '0' != v[i])
                return false;
        }

        return true;
    }
};