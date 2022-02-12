// 812.✅ Largest Triangle Area

class Solution
{
public:
    double largestTriangleArea(vector<vector<int>> &points)
    {
        // KNOCKCAT \\

        int n = points.size();
        double maxarea = 0;

        double d1, d2, d3, area, s;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    d1 = sqrt((double)pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2));
                    d2 = sqrt((double)pow(points[j][0] - points[k][0], 2) + pow(points[j][1] - points[k][1], 2));
                    d3 = sqrt((double)pow(points[i][0] - points[k][0], 2) + pow(points[i][1] - points[k][1], 2));

                    s = (d1 + d2 + d3) / 2.00000;

                    area = (double)sqrt(s * (s - d1) * (s - d2) * (s - d3)); // Heroen's Formulae

                    if (maxarea < area)
                        maxarea = area;
                }
            }
        }
        return maxarea;
    }
};