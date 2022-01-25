// 941.✅ Valid Mountain Array

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int i = 0;
        int n = arr.size();
        if (n <= 2)
            return false;

        for (i = 0; i < n; i++)
        {
            if (arr[i] < arr[i + 1])
                continue;
            else
                break;
        }

        if (i == 0 || i == n - 1)
            return false;

        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
                continue;
            else
                return false;
        }

        return true;
    }
};