// 1769.✅ Minimum Number of Operations to Move All Balls to Each Box

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int n = boxes.length();
        vector<int> v(n);

        int step = 0, cnt = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            v[i] = step;
            if (boxes[i] == '1')
                ++cnt;
            step += cnt;
        }

        step = 0, cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            v[i] += step;
            if (boxes[i] == '1')
                ++cnt;
            step += cnt;
        }
        return v;
    }
};