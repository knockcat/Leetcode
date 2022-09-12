// 2365.✅ Task Scheduler II

class Solution
{
public:
    long long taskSchedulerII(vector<int> &tasks, int space)
    {
        map<long long, long long> mp;
        long long day = 0;

        for (int i = 0; i < tasks.size(); ++i)
        {
            if (mp.find(tasks[i]) == mp.end())
            {
                ++day;
                mp[tasks[i]] = day;
                continue;
            }

            long long last_day = mp[tasks[i]];

            day = max(day + 1, last_day + space + 1);

            mp[tasks[i]] = day;
        }
        return day;
    }
};