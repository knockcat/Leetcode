// 845.✅ Longest Mountain in Array

class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int res = 0;

        int n = arr.size();

        for (int i = 1; i < n; ++i)
        {
            int cnt = 1;
            bool flag = false;

            int j = i;

            // increasing sequence
            while (j < n && arr[j] > arr[j - 1])
            {
                ++j;
                ++cnt;
            }

            // decreasing sequence
            while (i != j && j < n && arr[j] < arr[j - 1])
            {
                ++j;
                ++cnt;
                flag = true;
            }
            // max length
            if (i != j && flag && cnt > 2)
            {
                res = max(res, cnt);
                --j;
            }
            i = j;
        }
        return res;
    }
};