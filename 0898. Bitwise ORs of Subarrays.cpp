// 898.✅ Bitwise ORs of Subarrays

class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        vector<int> res;
        int left = 0, right = 0;

        for (int a : arr)
        {
            right = res.size();
            res.push_back(a);

            for (int i = left; i < right; ++i)
            {
                if (res.back() != (res[i] | a))
                    res.push_back(res[i] | a);
            }
            left = right;
        }
        return unordered_set(res.begin(), res.end()).size();
    }
};

// Another Approach

class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        unordered_set<int> s;
        set<int> t;
        for (int i : arr)
        {
            set<int> res;
            res.insert(i);

            for (int j : t)
                res.insert(i | j);
            t = res;
            for (int j : t)
                s.insert(j);
        }
        return s.size();
    }
};