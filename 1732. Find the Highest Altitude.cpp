// 1732.✅ Find the Highest Altitude

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> v;
        int sum = 0;

        for (int i = 0; i < gain.size(); ++i)
        {
            sum += gain[i];
            v.push_back(sum);
        }

        int mx = *max_element(v.begin(), v.end());

        if (mx > 0)
            return mx;
        return 0;
    }
};