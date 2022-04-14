1539.✅ Kth Missing Positive Number

    class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        if (arr[0] > k)
            return k;

        int num = k;

        for (int i : arr)
        {
            if (i <= num)
            {
                num++;
            }
            else
                break;
        }
        return num;
    }
};

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int start = 0, end = arr.size();
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] - mid - 1 < k)
                start = mid + 1;
            else
                end = mid;
        }
        return start + k;
    }
};