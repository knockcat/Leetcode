//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == 1)
            {
                a[i] = -1;
                ++cnt;
            }
            else
                {
                    a[i] = 1;
                }
        }
        
        int ans = 0, sum = 0;
        
        for(int i = 0; i < n; ++i)
        {
            sum += a[i];
            
            ans = max(ans, sum);
            
            if(sum < 0)
                sum = 0;
        }
        
        return ans + cnt;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends