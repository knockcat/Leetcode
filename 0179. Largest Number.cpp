// 179. Largest Number

class Solution
{
public:
    static bool check(string &s1, string &s2)
    {
        return (s1 + s2) >= (s2 + s1);
    }
    string largestNumber(vector<int> &nums)
    {
        int ind = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
                ++ind;
        }
        if (ind == nums.size())
            return "0"; // if all zeroes are there

        vector<string> s(nums.size(), "");

        for (int i = 0; i < nums.size(); ++i)
            s[i] = to_string(nums[i]);

        sort(s.begin(), s.end(), check);

        string ans = "";

        for (int i = 0; i < s.size(); ++i)
        {
            ans += s[i];
        }

        return ans;
    }
};