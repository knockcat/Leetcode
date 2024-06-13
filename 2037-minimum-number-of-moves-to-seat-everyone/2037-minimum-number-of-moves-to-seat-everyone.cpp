class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        int n = seats.size();
        
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        int st = 0, end = n-1;
        
        int moves = 0;
        
        while(st <= end)
        {
            int f = abs(seats[st] - students[st]);
            int s = abs(seats[end] - students[end]);
            
            if(f < s)
            {
                moves += f;
                ++st;
            }
            else
            {
                moves += s;
                --end;
            }
        }
        
        return moves;
        
    }
};