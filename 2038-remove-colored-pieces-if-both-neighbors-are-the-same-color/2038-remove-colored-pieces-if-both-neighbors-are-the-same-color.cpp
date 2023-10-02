class Solution {
public:
    bool winnerOfGame(string colors) {
        
        int n = colors.size();
        
        int aliceMoves = 0, bobMoves = 0;
        
        for(int i = 1; i < n-1; ++i)
        {
            char prev = colors[i-1];
            char curr = colors[i];
            char next = colors[i+1];
            
            if(prev == curr and curr == next)
            {
                if(curr == 'A')
                    ++aliceMoves;
                else
                    ++bobMoves;
            }
        }
        
        return (aliceMoves >= bobMoves + 1 ? 1 : 0);
        
    }
};