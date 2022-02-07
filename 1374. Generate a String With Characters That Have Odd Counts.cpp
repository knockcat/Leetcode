// 1374.✅ Generate a String With Characters That Have Odd Counts

class Solution
{
public:
    string generateTheString(int n)
    {
        string s;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n - 1; ++i)
                s.push_back('a');
            s.push_back('b');
        }
        else
        {
            for (int i = 0; i < n; ++i)
                s.push_back('a');
        }

        return s;
    }
};