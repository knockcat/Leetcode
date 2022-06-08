// 354.✅ Russian Doll Envelopes

class Solution
{
public:
    int maxEnvelopes(vector<vector<int>> &envelopes)
    {
        sort(envelopes.begin(), envelopes.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0]; });
        vector<int> dp;
        for (auto envelope : envelopes)
        {
            auto it = lower_bound(dp.begin(), dp.end(), envelope[1]);
            if (it == dp.end())
            {
                // If envelope[1] is the biggest, we should add it into the end of dp.
                dp.push_back(envelope[1]);
            }
            else
            {
                *it = envelope[1];
            }
        }

        return dp.size();
    }
};