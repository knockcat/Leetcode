class Solution {
public:
    
    bool helper(int i, int j, int n, int m , int idx, vector<vector<char> >& board, string& word)
    {
       
        if(idx == word.size())
            return true;
        if(i <0 or j < 0 or i >= n or j >= m or board[i][j] == '!' or board[i][j] != word[idx])
            return false;
        char ch = board[i][j];
        board[i][j] = '!';

        int top = helper(i-1,j,n,m,idx+1,board,word);
        int bottom = helper(i+1,j,n,m,idx+1, board, word);
        int left = helper(i,j-1,n,m,idx+1,board,word);
        int right = helper(i,j+1,n,m,idx+1,board,word);

        board[i][j] = ch;

        return top or bottom or left or right;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i = 0; i<n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(board[i][j] == word[0])
                {
                    if(helper(i,j,n,m,0,board,word))
                        return true;
                }
            }
        }
        return false;
    }
};