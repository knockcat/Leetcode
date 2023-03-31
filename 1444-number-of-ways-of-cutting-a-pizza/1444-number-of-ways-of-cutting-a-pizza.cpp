class Solution {

    int check(int row, int col, vector<string>& p)
    {
        for(int i = row ; i < p.size() ; i++){
            for(int j = col ; j < p[0].length() ; j++){
                if( p[i][j] == 'A' ) return true ;
            }
        }

        return false ;
    }

    bool hIsApple(int st, int cur, int c, vector<string>& p)
    {
        for(int row = st; row < cur ; row++){
            for(int col = c ; col < p[0].length() ; col++){
                if( p[row][col] == 'A' ) return true ;
            }
        }
        return false ;
    }

    bool vIsApple(int r, int st, int cur, vector<string>& p)
    {
        for(int row = r ; row < p.size() ; row++){
            for(int col = st ; col < cur ; col++){
                if( p[row][col] == 'A' ) return true ;
            }
        }
        return false ;
    }

    int helper(int &i, int &j, int k, vector<string>& p,vector<vector<vector<int>>> &dp)
    {
        if( k == 0 )
        {
            return check(i,j,p) ;
        }

        if( dp[i][j][k] != -1 ) return dp[i][j][k] ;

        int ans = 0 ;
        for(int row = i+1 ; row < p.size() ; row++)
        {
            if( hIsApple( i,row,j,p ) )
                ans = (ans + helper(row,j,k-1,p,dp))%mod ;
        }

        for(int col = j+1 ; col < p[0].length() ; col++)
        {
            if( vIsApple(i,j,col,p) )
                ans = (ans + helper(i,col,k-1,p,dp))%mod ;
        }

        return dp[i][j][k] = (ans)%mod ;
    }

public:
    int mod = 1e9+7 ;
    int ways(vector<string>& pizza, int k) {
        
        int n = pizza.size();
        int m = pizza[0].length() ;
        int i =0,j = 0;
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (m+1, vector<int> (k+1,-1))) ;
        return helper(i,j,k-1,pizza,dp) ; 
    }
};