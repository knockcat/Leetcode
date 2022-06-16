// 2244.✅ Minimum Rounds to Complete All Tasks

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        map<int, int> m;
        int cnt = 0;

        for (auto i : tasks)
            ++m[i];

        for (auto i : m)
        {
            if (i.second == 1)
                return -1;
            if (i.second % 3 == 0)
                cnt += i.second / 3;
            else
                cnt += i.second / 3 + 1;
        }

        return cnt;
    }
};