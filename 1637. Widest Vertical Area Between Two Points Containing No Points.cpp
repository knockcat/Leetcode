// 1637.✅ Widest Vertical Area Between Two Points Containing No Points

class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {

        sort(points.begin(), points.end());
        int res = 0;

        for (int i = 0; i < points.size() - 1; ++i)
            res = max(res, points[i + 1][0] - points[i][0]);

        return res;
    }
};
