// 341.✅ Flatten Nested List Iterator

class NestedIterator
{
public:
    vector<int> output;
    int i = 0;

    void helper(vector<NestedInteger> &nestedList)
    {
        for (int i = 0; i < nestedList.size(); ++i)
        {
            if (nestedList[i].isInteger())
                output.push_back(nestedList[i].getInteger());
            else
                helper(nestedList[i].getList());
        }
    }

    NestedIterator(vector<NestedInteger> &nestedList)
    {
        helper(nestedList);
    }

    int next()
    {
        int ans = output.at(i);
        ++i;
        return ans;
    }

    bool hasNext()
    {
        if (i < output.size())
            return true;
        else
            return false;
    }
};