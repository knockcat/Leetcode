// 1893.✅ Check if All the Integers in a Range Are Covered

class Solution
{

    bool inRange(int low, int high, int x)
    {
        return ((x - high) * (x - low) <= 0);
    }

public:
    bool isCovered(vector<vector<int>> &ranges, int left, int right)
    {
        sort(ranges.begin(), ranges.end());

        int flag = 0;

        for (int i = left; i <= right; ++i)
        {
            for (int j = 0; j < ranges.size(); ++j)
            {
                if (inRange(ranges[j][0], ranges[j][1], i))
                {
                    flag = 1;
                    break;
                }
                if (flag)
                    break;
            }
            if (flag == 0)
                return false;
            else
                flag = 0;
        }
        return true;
    }
};