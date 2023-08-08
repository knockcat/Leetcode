//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        unordered_map<float,int> mp;
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i){
            float a = (float)numerator[i]/(float)denominator[i];
            
            float b = (float)(denominator[i] - numerator[i])/(float)denominator[i];
            
            if(mp[b])
                cnt += mp[b];
            
            // cout<<a<<endl;
            ++mp[a];
        }
        
        return cnt;
    }
    
    //     numerator = [3, 1, 12, 81, 2]
    // denominator = [9, 10, 18, 90, 5]
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends