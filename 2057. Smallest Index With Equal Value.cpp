// 2057.✅ Smallest Index With Equal Value

class Solution
{
public:
    int smallestEqual(vector<int> &nums)
    {

        set<int> s;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 10 == nums[i])
            {
                s.insert(i);
            }
        }

        if (s.size() == 0)
            return -1;

        return *s.begin();
    }
};
