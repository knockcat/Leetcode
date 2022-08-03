// 2357. Make Array Zero by Subtracting Equal Amounts

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {

        int count = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
                continue;
            else
            {
                int a = nums[i];
                for (int j = i; j < nums.size(); ++j)
                {
                    // nums[j] -= nums[i];
                    nums[j] -= a;
                }

                cout << endl;

                for (auto itr : nums)
                    cout << itr << " ";

                ++count;

                cout << endl;
                cout << count;
            }
        }
        return count;
    }
};