// 2164.✅ Sort Even and Odd Indices Independently

class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {

        vector<int> od;
        vector<int> ev;
        int j = 0, k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
                ev.push_back(nums[i]);
            else
                od.push_back(nums[i]);
        }

        sort(od.begin(), od.end(), greater<int>());

        sort(ev.begin(), ev.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 2 == 0)
                nums[i] = ev[j++];
            else
                nums[i] = od[k++];
        }
        return nums;
    }
};