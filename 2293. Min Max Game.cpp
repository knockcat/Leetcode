// 2293.✅ Min Max Game

class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        int n = nums.size();

        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return min(nums[0], nums[1]);
        list<int> l;
        while (n / 2 > 1)
        {
            int flag = 1;
            for (int i = 0; i < nums.size(); i += 2)
            {
                if (flag)
                {
                    l.push_back(min(nums[i], nums[i + 1]));
                    flag = 0;
                }
                else
                {
                    l.push_back(max(nums[i], nums[i + 1]));
                    flag = 1;
                }
            }
            nums.clear();
            for (int &i : l)
                nums.push_back(i);
            n /= 2;
            l.clear();
            for (auto i : nums)
                cout << i << " ";
            cout << endl;
        }
        if (nums.size() == 2)
            return min(nums[0], nums[1]);

        return nums[0];
    }
};