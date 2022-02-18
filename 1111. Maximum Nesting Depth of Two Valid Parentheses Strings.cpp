// 1111.✅ Maximum Nesting Depth of Two Valid Parentheses Strings

class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        vector<int> res;
        int ind = 0;
        for (auto i : seq)
        {
            if (i == '(')
                ++ind;

            res.push_back(ind % 2);

            if (i == ')')
                --ind;
        }

        return res;
    }
};