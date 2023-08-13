//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    const int mod = 1e9+7;
  
    int nthFibonacci(int n){
        // code here
        
        int first = 0, second = 1;
        
        if(n == 1)
            return 0;
        if(n == 2)
            return 1;
            
        int ans = second;
        
        for(int i = 2; i <= n; ++i)
        {
            ans = (first + second)%mod;
            first = second;
            second = ans;
        }
        
        return ans % mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends