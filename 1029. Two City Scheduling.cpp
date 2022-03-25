// 1029.✅ Two City Scheduling

class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        vector<int> diff;
        int mincost = 0;

        for (int i = 0; i < costs.size(); ++i)
        {
            // cost to send every person to city A
            mincost += costs[i][0];
            // computing difference if person sent to city B
            diff.push_back(costs[i][1] - costs[i][0]);
        }

        // sort the diff vector
        sort(diff.begin(), diff.end());

        // picking n persons having least diff
        // sending them to city B
        for (int i = 0; i < costs.size() / 2; ++i)
        {
            mincost += diff[i];
        }

        return mincost;
    }
    // for github repository link go to my profile.
};