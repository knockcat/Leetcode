// 777.✅ Swap Adjacent in LR String

class Solution
{
public:
    bool canTransform(string start, string end)
    {
        int i = 0, j = 0;

        while (i < start.size() && j < end.size())
        {
            while (start[i] == 'X')
                ++i;
            while (end[j] == 'X')
                ++j;

            if (start[i] != end[j])
                return 0;
            else if (start[i] == 'R' && i > j)
                return 0;
            else if (start[i] == 'L' && i < j)
                return 0;
            ++i;
            ++j;
        }
        while (i < start.size() && start[i] == 'X')
            i++;
        while (j < end.size() && end[j] == 'X')
            j++;
        return i == j;
    }
};
