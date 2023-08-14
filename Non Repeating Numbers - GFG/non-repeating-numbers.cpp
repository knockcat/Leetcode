//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
        unordered_map<int,int> mp;
        
        for(auto itr : nums)
        {
            ++mp[itr];
        }
        
        vector<int> ans;
        
        for(auto itr : mp)
        {
            if(itr.second == 1)
                ans.push_back(itr.first);
        }
        
        if(ans[0] > ans[1])
            swap(ans[0], ans[1]);
            
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends