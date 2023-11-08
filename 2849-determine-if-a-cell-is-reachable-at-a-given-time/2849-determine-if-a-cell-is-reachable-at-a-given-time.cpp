class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        int xDiff = abs(sx - fx);
        int yDiff = abs(sy - fy);
        
        int diagonalDist = min(xDiff, yDiff);
        
        if(sx == fx and sy == fy and t == 1)
            return false;
        
        int minDist = diagonalDist + abs(xDiff - yDiff);
        
        return minDist <= t;
    }
};