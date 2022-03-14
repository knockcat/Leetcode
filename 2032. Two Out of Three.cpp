// 2032.✅ Two Out of Three

class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        unordered_map<int, set<int>> m;
        vector<int> res;

        for (int i = 0; i < nums1.size(); ++i)
            m[nums1[i]].insert(1);
        for (int i = 0; i < nums2.size(); ++i)
            m[nums2[i]].insert(2);
        for (int i = 0; i < nums3.size(); ++i)
            m[nums3[i]].insert(3);

        for (auto it = m.begin(); it != m.end(); ++it)
        {
            if (it->second.size() >= 2)
                res.push_back(it->first);
        }

        return res;
    }
};