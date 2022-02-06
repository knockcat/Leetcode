// 2154.✅ Keep Multiplying Found Values by Two

class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        int n = 1;
        for (int i = 0; i < n; ++i)
        {
            if (find(nums.begin(), nums.end(), original) != nums.end()) // find func detailled explanation above
            {
                original *= 2;
                n += 1; // n is incremented by one beacuse questions want us to perform the operation again if element is found again after its double.
            }
        }
        return original;
    }
};