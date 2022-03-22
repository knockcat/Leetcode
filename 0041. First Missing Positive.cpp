// 41.✅ First Missing Positive

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        set<int> s;
        int ans = 1;
        for (int i = 0; i < nums.size(); ++i)
            s.insert(nums[i]);

        for (int i = 1; i <= nums.size() + 1; ++i)
        {
            auto it = s.find(i);
            if (it == s.end())
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};

// Another Approach

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        bool contains_one = false;
        for (int x : nums)
        {
            if (x == 1)
            {
                contains_one = true;
                break;
            }
        }

        if (!contains_one)
            return 1;

        int n = nums.size();
        if (n == 1)
            return 2;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] <= 0 || nums[i] > n)
                nums[i] = 1;
        }

        for (int i = 0; i < n; ++i)
        {
            int x = abs(nums[i]);
            if (nums[x - 1] > 0)
                nums[x - 1] *= -1;
        }

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
                return i + 1;
        }

        return n + 1;
    }
};