class Solution {
public:
    int mod=1e9+7;
    
    int helper(vector<vector<int>>&dp,vector<int>&locations,int current,int &finish,int fuel, int n){

        if(fuel<0)
        return 0;

        if(dp[current][fuel]!=-1)
         return dp[current][fuel];

        int ans=0;

        if(current==finish)
        ans++;

        for(int next=0;next<n;next++)
            if(next!=current)
                ans=(ans%mod+helper(dp,locations,next,finish,fuel-abs(locations[current]-locations[next]),n)%mod)%mod;
         

        return dp[current][fuel]=ans%mod;
    }


    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {

        int n=locations.size();

        vector<vector<int>>dp(n,vector<int>(fuel+1,-1));

        return helper(dp,locations,start,finish,fuel,n);
    }
};