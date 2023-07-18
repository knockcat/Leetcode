//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    int n = A.size();
		    
		    vector<int> v(26,0), first(26,n+1);
		    
		    string ans;
		    
		    for(int i = 0; i < n; ++i)
		    {
		        ++v[A[i] - 'a'];
		        
		        if(first[A[i] - 'a'] == n+1)
		            first[A[i] - 'a'] = i;
		           
		        bool ok = false;
		        int mini = n+1;
		        char ch = '#';
		        
		        for(int j = 0; j < 26; ++j)
		        {
		            if(v[j] == 1)
		            {
		                ok = true;
		                if(first[j] < mini)
		                {
		                    mini = first[j];
		                    ch = A[mini];
		                }
		            }
		        }
		        
		        if(ok)
		            ans += ch;
		        else
		            ans += ch;
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends