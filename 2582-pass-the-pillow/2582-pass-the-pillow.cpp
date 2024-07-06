class Solution {
public:
    int passThePillow(int n, int time) {
        
        int dir = 1, pos = 1;
        
        while(time--)
        {
            if(dir)
            {
                ++pos;
                if(pos == n)
                {
                    dir = 0;
                }
            }
            else
            {
                --pos;
                if(pos == 1)
                {
                    dir = 1;
                }
            }
        }
        
        return pos;
    }
};