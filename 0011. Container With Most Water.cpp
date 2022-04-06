// 11.✅ Container With Most Water

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int mx = 0;
        while (left < right)
        {
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w * h;

            mx = max(area, mx);

            if (height[left] < height[right])
                ++left;
            else if (height[left] > height[right])
                --right;
            else
            {
                ++left;
                --right;
            }
        }

        return mx;
    }
};
