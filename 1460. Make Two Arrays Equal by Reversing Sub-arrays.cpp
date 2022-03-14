// 1460.✅ Make Two Arrays Equal by Reversing Sub-arrays

class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {

        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());

        for (int i = 0; i < target.size(); ++i)
        {
            if (target[i] != arr[i])
                return false;
        }
        return true;
    }
};

class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        map<int, int> m;
        for (int i = 0; i < arr.size(); ++i)
        {
            ++m[arr[i]];
            --m[target[i]];
        }
        for (auto i : m)
        {
            if (i.second)
                return false;
        }
        return true;
    }
};