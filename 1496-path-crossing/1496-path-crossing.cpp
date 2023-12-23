class Solution {
public:
    bool isPathCrossing(string path) {
        
        int n = path.size();
        
        set<pair<int,int>> used;
        
        int x = 0, y = 0;
        
        used.insert({x, y});
        
        for(int i = 0; i < n; ++i)
        {
            if(path[i] == 'N')
                ++y;
            else if(path[i] == 'E')
                ++x;
            else if(path[i] == 'S')
                --y;
            else
                --x;
            if(used.count({x, y}))
                return true;
            used.insert({x,y});
        }
        
        return false;
    }
};