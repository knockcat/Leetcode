// 1385.✅ Find the Distance Value Between Two Arrays

class Solution
{
public:
    bool check(vector<int> arr, int target, int d)
    {
        int start = 0, end = arr.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (abs(arr[mid] - target) <= d)
                return false;
            else if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return true;
    }

    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        sort(arr2.begin(), arr2.end());
        int ind = 0;

        for (auto i : arr1)
        {
            if (check(arr2, i, d))
                ++ind;
        }
        return ind;
    }
};

// another approach

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ind = arr1.size();

        for (int i = 0; i < arr1.size(); ++i)
        {
            for (int j = 0; j < arr2.size(); ++j)
            {
                if (abs(arr1[i] - arr2[j]) <= d)
                {
                    --ind;
                    break;
                }
            }
        }
        return ind;
    }
};