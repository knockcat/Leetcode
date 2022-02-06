// 384.✅ Shuffle an Array

class Solution
{
    vector<int> org;
    int n;

public:
    Solution(vector<int> &nums)
    {
        org = nums;
        n = org.size();
    }

    vector<int> reset()
    {
        return org;
    }

    vector<int> shuffle()
    {
        vector<int> shuffled = org;
        int leftsize = n;
        for (int i = n - 1; i >= 0; --i)
        {
            int j = rand() % leftsize;
            swap(shuffled[i], shuffled[j]);
            leftsize--;
        }
        return shuffled;
    }
};
