// 1903.✅ Largest Odd Number in String

class Solution
{
public:
    string largestOddNumber(string num)
    {
        int mx = INT_MIN;
        for (int i = num.size() - 1; i >= 0; --i)
        {
            if (num[i] - '0' & 1)
            {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};