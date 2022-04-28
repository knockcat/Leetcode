// 1855.✅ Maximum Distance Between a Pair of Values

class Solution
{
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
    {
        int res = 0, i, j;
        i = j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] > nums2[j])
                ++i;
            else
                res = max(res, j++ - i);
        }
        return res;
    }
};
