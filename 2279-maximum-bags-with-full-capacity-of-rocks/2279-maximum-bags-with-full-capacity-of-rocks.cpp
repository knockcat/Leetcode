class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int n = capacity.size(), count = 0;
        
        for(int i = 0; i<n; ++i)
            capacity[i] -= rocks[i];
        
        sort(begin(capacity),end(capacity));
        
        for(int i = 0; i<n; ++i)
        {
            if(capacity[i] <= additionalRocks)
                ++count, additionalRocks -= capacity[i];
            else
                break;
        }
        
        return count;
        
    }
};