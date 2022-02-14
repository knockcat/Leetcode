// 2073.✅ Time Needed to Buy Tickets

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int cnt = 0;
        while (1)
        {
            for (int i = 0; i < tickets.size(); ++i)
            {
                if (tickets[i] == 0)
                    continue;
                --tickets[i];
                ++cnt;
                if (tickets[k] == 0)
                    return cnt;
            }
        }
    }
};