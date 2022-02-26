// 1207.✅ Unique Number of Occurrences

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> m;

        for (int i = 0; i < arr.size(); ++i)
        {
            ++m[arr[i]];
        }

        vector<int> ans;

        for (auto i : m)
            ans.push_back(i.second);

        sort(ans.begin(), ans.end());

        // for(auto i : ans)
        //         cout<<i<<" ";

        for (int i = 1; i < ans.size(); ++i)
        {
            if (ans[i - 1] == ans[i])
                return false;
        }
        return true;
    }
};