//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
private:
    bool checkEqualPartition(int idx, int n, int sum, int arr[], vector<vector<int>>& dp)
    {
        if(idx == n)
        {
            return sum == 0;
        }
        
        if(dp[idx][sum] != -1)
            return dp[idx][sum];
        
        bool notTake = checkEqualPartition(idx + 1, n, sum, arr, dp);
        
        bool take = false;
        
        if(arr[idx] <= sum)
            take = checkEqualPartition(idx + 1, n, sum - arr[idx], arr, dp);
            
        return dp[idx][sum] = take | notTake;
    }
    
    
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        
        
        int sum = accumulate(arr, arr+N, 0);
        
        if(sum & 1)
            return false;
            
        vector<vector<int>> dp(N+1, vector<int>((sum/2) + 1, -1));

        return checkEqualPartition(0, N, sum/2, arr, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends