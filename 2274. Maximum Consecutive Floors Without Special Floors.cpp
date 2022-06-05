// 2274.✅ Maximum Consecutive Floors Without Special Floors

class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &special)
    {
        sort(special.begin(), special.end());
        int a = abs(bottom - *min_element(special.begin(), special.end()));
        int b = abs(top - *max_element(special.begin(), special.end()));
        int ans = INT_MIN;
        for (int i = 1; i < special.size(); ++i)
        {
            long h = abs(special[i] - special[i - 1]) - 1;
            if (h > ans)
                ans = h;
        }

        ans = max(a, max(b, ans));

        return ans;
    }
};