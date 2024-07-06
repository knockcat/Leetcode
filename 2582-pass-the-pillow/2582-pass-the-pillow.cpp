class Solution {
public:
    int passThePillow(int n, int time) {
        
        int fullChunks = time / (n-1);
        int extTime = time % (n-1);
        
        return (fullChunks & 1 ? n - extTime : extTime + 1);
        
    }
};