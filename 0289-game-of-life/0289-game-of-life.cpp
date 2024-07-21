class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        vector<int> dx = {-1, -1, -1, 0, 0, +1, +1, +1};
        vector<int> dy = {-1, 0, +1, -1, +1, -1, 0, +1};
        
        int n = board.size();
        int m = board[0].size();
        
        set<pair<int,int>> st;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(board[i][j])
                    st.insert({i, j});
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                int alive = 0;
                int dead = 0;
                    
                for(int k = 0; k < 8; ++k)
                {
                    int newx = i + dx[k];
                    int newy = j + dy[k];
                    
                    if(newx >= 0 and newy >= 0 and newx < n and newy < m)
                    {
                        // cout<<newx<<' '<<newy<<"' - '";
                        if(st.count({newx, newy}))
                            ++alive;
                        else
                            ++dead;
                    }
                }
                if(st.count({i, j}))
                {
                    if(alive < 2 or alive > 3)
                        board[i][j] = 0;
                }
                else
                {
                    // cout<<alive<<endl;
                    if(alive == 3)
                        board[i][j] = 1;
                }
                // cout<<endl;
            }
        }
    }
};