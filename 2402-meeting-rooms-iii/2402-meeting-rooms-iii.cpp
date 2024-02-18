
class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        
        int m = meetings.size();
        
        int roomOccupied = 0;
        
        sort(meetings.begin(), meetings.end());
        
        vector<int> roomCount(n, 0);
        
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> meetingRooms; // EndTime, RoomNumber
        
        priority_queue<int, vector<int>, greater<int>> availableRooms;
        
        for(int room = 0; room < n; ++room)
            availableRooms.push(room);
        
        for(auto& meet : meetings)
        {
            long long start = meet[0];
            long long end = meet[1];
            long long duration = end - start;
            
            while(!meetingRooms.empty() and meetingRooms.top().first <= start)
            {
                int room = meetingRooms.top().second;
                availableRooms.push(room);
                meetingRooms.pop();
            }
            
            if(!availableRooms.empty())
            {
                int room = availableRooms.top();
                availableRooms.pop();
                meetingRooms.push({end, room});
                ++roomCount[room];
            }
            else
            {
                int room = meetingRooms.top().second;
                long long endTime = meetingRooms.top().first;
                meetingRooms.pop();
                endTime += duration;
                meetingRooms.push({endTime, room});
                ++roomCount[room];
            }
        }
        
        int resultRoom = -1;
        int maxUse = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(roomCount[i] > maxUse)
            {
                resultRoom = i;
                maxUse = roomCount[i];
            }
        }
        
        return resultRoom;
    }
};