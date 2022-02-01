// 1299.✅ Replace Elements with Greatest Element on Right Side

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size(), temp, m = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            temp = arr[i];
            arr[i] = m;
            m = max(m, temp);
        }
        return arr;
    }
};