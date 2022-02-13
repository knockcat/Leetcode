// 2124.✅ Check if All A's Appears Before All B's

class Solution
{
public:
    bool checkString(string s)
    {
        return is_sorted(s.begin(), s.end());
    }
};