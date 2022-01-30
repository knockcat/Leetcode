// 2053.✅ Kth Distinct String in an Array

class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        map<string, int> m;

        for (string str : arr)
        {
            m[str]++;
        }

        for (string str : arr)
        {
            if (m[str] == 1 && --k == 0)
                return str;
        }

        return "";
    }
};