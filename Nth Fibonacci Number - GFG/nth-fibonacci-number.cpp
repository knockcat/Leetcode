//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    
  private:
  
   const int mod = 1e9 + 7;
   
    vector<vector<long long>> matrixMultiplication(vector<vector<long long>> mat1, vector<vector<long long>> mat2)
    {
        vector<vector<long long>> ans(2, vector<long long>(2));
        
        for(int i = 0; i < 2; ++i)
        {
            for(int j = 0; j < 2;  ++j)
            {
                for(int k =0 ; k < 2 ; ++k)
                {
                    ans[i][j] +=  (long long)(mat1[i][k]%mod * mat2[k][j]%mod)%mod;
                    ans[i][j] %= mod;
                }
            }
        }
        
        return ans;
    }
   
  
    vector<vector<long long>> expo(vector<vector<long long>>& mat, int n)
    {
        
        if(n == 1)
            return mat;
        
        vector<vector<long long>> temp = mat;
       
        
        while(n > 0)
        {
            if(n & 1)
            {
                temp = matrixMultiplication(mat, temp);
            }
            
            mat = matrixMultiplication(mat, mat);
            
            n >>= 1;
        }
        
        return temp;
    }
    
  public:
    int nthFibonacci(int n){
        // code here
        
        if(n == 0)
            return 0;
        
        vector<vector<long long>> mat = {{1,1},{1,0}};
        
        vector<vector<long long>> ans = expo(mat, n-1);
        
        return ans[0][1]%mod;
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