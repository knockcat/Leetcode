//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    private:
    void helper(int idx, string S, vector<string>& ans)
    {
        if(idx == S.size())
        {
            ans.push_back(S);
            return;
        }
        
        for(int i = idx; i < S.size(); ++i)
        {
            swap(S[idx], S[i]);
            helper(idx+1, S, ans);
            swap(S[idx], S[i]);
        }
    }
    
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        
        vector<string> ans;
        
        helper(0, S, ans);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends