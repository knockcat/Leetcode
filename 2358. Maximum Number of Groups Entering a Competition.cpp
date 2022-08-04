// 2358.✅ Maximum Number of Groups Entering a Competition

class Solution
{
public:
    int maximumGroups(vector<int> &grades)
    {

        int n = grades.size();
        int count = 0;

        int i = 1;
        while (n > 0)
        {
            n -= i++;
            ++count;
        }

        return n == 0 ? count : count - 1;
    }
};