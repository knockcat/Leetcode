class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
        int n = meetings.size();
        
        vector<pair<int,int>> events;
        
        for(auto& e : meetings)
        {
            events.push_back({e[0], +1});
            events.push_back({e[1], -1});
        }
        
        events.push_back({0, 0});
        events.push_back({days+1, 0});
        
        sort(events.begin(), events.end());
        
        int ans = 0, currMeetings = 0;
    
        for(int i = 0; i < events.size()-1; ++i)
        {
            currMeetings += events[i].second;
           
            if(currMeetings == 0)
            {
                ans += max(0, events[i+1].first - events[i].first - 1);
            }
            
        }
        
        return ans;
        
    }
};