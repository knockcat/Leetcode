//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        
        int idx1 = lower_bound(arr,arr+n, x) - arr;
        int idx2 = lower_bound(arr, arr+n,x+1) - arr;
        
        bool ok = false, ok2 = false;
        
        if(idx1 >= 0 and idx1 < n and arr[idx1] == x)
            ok = true;
        if(idx2-1 >= 0 and idx2-1 < n and arr[idx2-1] == x)
            ok2 = true;
            
        // cout<<idx1<<' '<<idx2<<endl;
        if(ok and ok2)
            return {idx1, idx2-1};
        return {-1, -1};
            
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends