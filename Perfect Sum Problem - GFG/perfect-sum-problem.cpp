//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


    private:
    
    const int mod = 1e9+7;
    
    int helper(int idx, int n, int sum, int arr[], vector<vector<int>>& dp)
    {
        if(idx == n)
        {
            return sum == 0;
        }
        
        if(dp[idx][sum] != -1)
            return dp[idx][sum];
        
        int notTake = helper(idx+1, n, sum, arr, dp);
        
        int take = 0;
        
        if(arr[idx] <= sum)
            take = helper(idx+1 , n, sum - arr[idx], arr, dp);
            
        return dp[idx][sum] = (take + notTake) % mod;;
    }

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        
        return helper(0, n, sum, arr, dp);
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends