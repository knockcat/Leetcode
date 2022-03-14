// 398.✅ Random Pick Index

class Solution
{
public:
    vector<int> v;
    Solution(vector<int> &nums)
    {
        v = nums;
    }

    int pick(int target)
    {
        vector<int> ans;
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] == target)
                ans.push_back(i);
        }
        return ans[rand() % ans.size()]; // generate a random index and return the value at that index
    }
};