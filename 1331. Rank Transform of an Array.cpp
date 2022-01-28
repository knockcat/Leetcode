// 1331.✅ Rank Transform of an Array

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        if (arr.size() == 0)
            return arr;
        vector<int> v;
        unordered_map<int, int> mp;

        v = arr;

        sort(v.begin(), v.end());

        int rank = 1;

        mp[v[0]] = 1;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i - 1] != v[i])
                rank++;
            mp[v[i]] = rank;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};