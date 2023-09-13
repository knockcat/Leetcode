//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here  
        
        
        int negCount = 0, zeroCount = 0;
        
        int maximumMin = INT_MIN;
        
        if(n == 1)
            return a[0];
            
        long long int prod = 1;
        
        const int mod = 1e9+7;
        
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == 0)
            {
                ++zeroCount;
                continue;
            }
            
            if(a[i] < 0)
            {
                ++negCount;
                maximumMin  = max(maximumMin, a[i]);
            }
           
            prod = (prod * 1LL * a[i]) % mod;
        }
        
        if(negCount == 1 and zeroCount == n-1 or zeroCount == n)
            return 0;
        
        if(negCount & 1)
        {
            prod /= maximumMin;
        }
        
        return abs(prod);
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    long long int ans = ob.findMaxProduct(arr, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends