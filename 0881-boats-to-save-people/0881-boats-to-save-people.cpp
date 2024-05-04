class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int cnt = 0;
        
        sort(people.begin(),people.end());
        
        int n = people.size();
        int start = 0, end = n-1;
        
        while(start <= end)
        {
            if(people[start] + people[end] <= limit)
            {
                ++start, --end;
            }
            else
                --end;
            ++cnt;
        }
        
        return cnt;
    }
};