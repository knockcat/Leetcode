// 1288.✅ Remove Covered Intervals

class Solution
{
public:
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {

        // sorting the intervals(vector)
        sort(intervals.begin(), intervals.end());

        int x1 = intervals[0][0];
        int x2 = intervals[0][1];

        int res = 1; // one for x1 and x2;

        // ifa[i][0] && a[i][1] both greater than a[i-1][0] && a[i-1][1]
        // increase the cnt.
        for (int i = 1; i < intervals.size(); ++i)
        {
            if (intervals[i][0] > x1 && intervals[i][1] > x2)
                ++res;

            // updating x1 & x2 with next intervals
            as we are comparing from upcoming ones.if (intervals[i][1] > x2)
            {
                x1 = intervals[i][0];
                x2 = intervals[i][1];
            }
        }

        return res; // return cnt
    }
};