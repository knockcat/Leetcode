// 1394.✅ Find Lucky Integer in an Array

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {

        map<int, int> m;
        int ans = -1;
        for (int i = 0; i < arr.size(); ++i)
            ++m[arr[i]];

        for (auto i : m)
        {
            if (i.first == i.second)
                ans = max(ans, i.first);
        }

        return ans;
    }
};