//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    private:
        int helper(int i, int j, int n,  string& str1, string& str2, vector<vector<int>>& dp)
        {
            if(i >= n or j >= n)
                return 0;
            
            if(dp[i][j] != -1)
                return dp[i][j];
            
            int take = 0;
            
            if(str1[i] == str2[j] and i != j)
                take =  1 + helper(i+1, j+1, n, str1, str2,  dp);
                
            int notTake =  max(helper(i+1, j ,n, str1, str2, dp), helper(i, j+1, n, str1, str2, dp));
            
            dp[i][j] = max(take, notTake);
        }
    
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		    int n = str.size();
		    
		    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

            for(int i = n-1; i >= 0; --i)
            {
                for(int j = n-1; j >= 0; --j)
                {
                    int take = 0;
                    
                    if(str[i] == str[j] and i != j)
                        take =  1 + dp[i+1][j+1];
                        
                    int notTake =  max(dp[i+1][j], dp[i][j+1]);
                    
                    dp[i][j] = max(take, notTake);
                }
            }
            
            return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends