//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       
       int n = S.size();
       
        vector<int> freq(26, 0);
        map<char,int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            ++freq[S[i]-'a'];
            
            mp[S[i]] = i;
        }
        
        char ch = '#';
        
        int idx = INT_MAX;
        
        for(int i = 0; i < n; ++i)
        {
            if(freq[S[i] - 'a'] == 1)
            {
                idx = min(idx, mp[S[i]]);
            }
        }
       
        if(idx == INT_MAX)
            return '$';
        return S[idx];
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends