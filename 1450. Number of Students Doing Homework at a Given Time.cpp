// 1450.✅ Number of Students Doing Homework at a Given Time

class Solution
{
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {

        int ind = 0;
        for (int i = 0; i < startTime.size(); ++i)
        {
            if (queryTime >= startTime[i] && queryTime <= endTime[i])
                ++ind;
        }
        return ind;
    }
};