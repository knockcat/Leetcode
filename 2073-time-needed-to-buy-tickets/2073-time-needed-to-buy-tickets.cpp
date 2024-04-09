class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int time = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(i <= k)
            {
                time += (tickets[i] <= tickets[k] ? tickets[i] : tickets[k]);
            }
            else
            {
                time += (tickets[i] < tickets[k] ? tickets[i] : max(0, tickets[k] - 1));
            }
        }
        
        return time;
    }
};