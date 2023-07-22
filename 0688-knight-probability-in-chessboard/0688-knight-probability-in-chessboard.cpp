class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {

        if(n == 1 and k == 1)
            return 0.0;
        
        vector<vector<double>> curr(n, vector<double>(n,0.0));
        
        curr[row][column] = 1.0;
        
        for(int moves = 1; moves <= k; ++moves)
        {
            vector<vector<double>> next(n, vector<double>(n,0.0));
            
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    if(curr[i][j] != 0)
                    {
                        int dx[8]={ 2, 1, -1, -2, -2, -1, 1, 2 };
                        int dy[8]={ 1, 2, 2, 1, -1, -2, -2, -1 };

                        for(int k = 0; k < 8; ++k)
                        {
                            int newx = dx[k] + i;
                            int newy = dy[k] + j;

                            if(newx >= 0 and newx < n and newy >= 0 and newy < n)
                            {
                                next[newx][newy] += curr[i][j]/8.0;
                            }
                        }
                    }
                }
            }
            
            curr = next;
        }
        
        double ans = 0.0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
                ans += curr[i][j];
        }
        
        return ans;
    }
};