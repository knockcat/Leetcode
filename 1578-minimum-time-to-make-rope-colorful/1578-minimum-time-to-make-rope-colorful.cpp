class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size();
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            int cost = neededTime[i], maxSegmentCost = neededTime[i];
            
            while(i+1 < n and colors[i] == colors[i+1])
            {
                cost += neededTime[i+1];
                maxSegmentCost = max(maxSegmentCost, neededTime[i+1]);
                ++i;
            }
            
            cost -= maxSegmentCost;
            
            ans += cost;
        }
        
        return ans;
    }
};