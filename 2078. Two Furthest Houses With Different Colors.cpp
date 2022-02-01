// 2078.✅ Two Furthest Houses With Different Colors

class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int n = colors.size();
        int m = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (colors[i] != colors[j])
                {
                    m = max(m, abs(i - j));
                }
            }
        }
        return m;
    }
};