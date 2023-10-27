//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    int helper(int i , int j, int n, string& s, string& t, vector<vector<int>>& dp)
    {
        if(i == n and j == n)
            return 0;
        
        if(i >= n or j >= n)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s[i] == t[j])
            return dp[i][j] = 1 + helper(i+1, j+1, n, s, t, dp);
        else
        {
            return dp[i][j] = max(helper(i+1, j, n, s, t, dp), helper(i, j+1, n, s, t, dp));
        }
    }
  
    int minimumNumberOfDeletions(string S) { 
        // code here
        
        int n = S.size();
        
        string t = S;
        
        reverse(t.begin(), t.end());
        
        if(t == S)  return 0;
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return n - helper(0, 0, n, S, t, dp);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends