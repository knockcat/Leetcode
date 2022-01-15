375. Guess Number Higher or Lower II

class Solution {
public:
    int t[201][201];
    int getMoneyAmount(int n) {
        
        for(int i = 0 ; i<201; i++)
        {
            for(int j = 0; j<201;j++)
            {
                t[i][j] = -1;
            }
        }
        return guess(1,n);
    }
    
    int guess(int start, int end)
    {
        if(start == end)
            return 0;
        
        if(t[start][end] != -1)
            return t[start][end];
        
        int ans = min(start+ guess(start + 1,end),end + guess(start,end - 1));
        for(int i = start+ 1 ; i<end; i++)
        {
            ans = min(ans, i+max(guess(i+1,end),guess(start,i-1)));
        }
        t[start][end] = ans;
        return t[start][end];
    }
};