// 347. Top K Frequent Elements347. Top K Frequent Elements

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;

        for (auto i : nums)
            ++mp[i];

        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for (auto i = mp.begin(); i != mp.end(); ++i)
        {
            pq.push(make_pair(i->second, i->first));
        }

        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};