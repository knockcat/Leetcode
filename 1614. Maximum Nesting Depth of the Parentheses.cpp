// 1614.✅ Maximum Nesting Depth of the Parentheses

class Solution
{
public:
    int maxDepth(string s)
    {

        int cnt = 0;

        if (s.size() == 0)
            return 0;
        int m = INT_MIN;

        for (auto i : s)
        {
            if (i == '(')
                ++cnt;
            if (i == ')')
                --cnt;

            m = max(m, cnt);
        }
        return m;
    }
};
