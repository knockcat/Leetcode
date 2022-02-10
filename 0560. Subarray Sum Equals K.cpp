// 560.✅ Subarray Sum Equals K

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        if (nums.size() == 0)
            return 0;
        int cnt = 0;
        unordered_map<int, int> m; //<prefix_sum , cnt>
        int curr_sum = 0;

        for (int n : nums)
        {
            curr_sum += n;
            if (curr_sum == k)
                cnt++;

            if (m.find(curr_sum - k) != m.end())
                cnt += m[curr_sum - k];
            if (m.find(curr_sum) != m.end())
                m[curr_sum] += 1;
            else
                m[curr_sum] = 1;
        }
        return cnt;
    }
};
