class Solution {
public:

    bool isMatch(string s, string p) {
        
        int n=p.size();
		int m=s.size();
		vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
		dp[0][0]=true;
		for(int j=1;j<=m;j++) dp[0][j]=false;
		for(int i=1;i<=n;i++){
			bool flag=true;
			for(int k=1;k<=i;k++){
				if(p[k-1]!='*'){
					flag=false;
					break;
				}
			}
			dp[i][0]=flag;
		}
        
        for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(p[i-1]==s[j-1] || p[i-1]=='?') dp[i][j]=dp[i-1][j-1];
				else if(p[i-1]=='*') dp[i][j]=dp[i-1][j] || dp[i][j-1];
				else dp[i][j]=false;
			}
		}
        return dp[n][m];
    }
};