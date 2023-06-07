class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int ai, bi, ci, cnt = 0;
        
        while(a or b or c)
        {
            ai = a & 1;
            bi = b & 1;
            ci = c & 1;
            
            if((ai | bi) != ci)
            {
                if(ai & bi)
                    cnt += 2;
                else
                    ++cnt;
            }
            
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        
        return cnt;
        
    }
};

 