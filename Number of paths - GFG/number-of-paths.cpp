//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    
    const int mod = 1e9+7;
    
    long long expo(long long x, long long y, long long mod)
    {
        long long res = 1;
        
        while(y > 0)
        {
            if(y & 1)
            {
                res = (res * x) % mod;
            }
            
            x = (x * x) % mod;
            
            y >>= 1;
        }
        
        return res;
    }
    
    long long modInverse(long long x, long long m)
    {
        return expo(x, m-2, m);
    }
    
    long long  numberOfPaths(int M, int N)
    {
        // Code Here
        
        int n = M + N - 2;
        int r = M-1;
        
        long long ans = 1;
        
        for(int i = 1; i <= r; ++i)
        {
            ans = (ans * (n-i+1)) % mod;
            ans = (ans * modInverse(i , mod))%mod;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends