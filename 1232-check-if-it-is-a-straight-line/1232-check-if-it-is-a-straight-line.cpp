class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n = coordinates.size();
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        for(int i = 2; i < n; ++i)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            
            // y-y1/x-x1 = y-y2/x-x2
            
            if((y-y1)*(x-x2) != (x-x1)*(y-y2))
                return false;
        }
        
        return true;
        
    }
};