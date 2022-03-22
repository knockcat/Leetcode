// 575.✅ Distribute Candi

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        set<int> s;
        for (int i = 0; i < candyType.size(); ++i)
            s.insert(candyType[i]);

        return min(s.size(), candyType.size() / 2);
    }
};