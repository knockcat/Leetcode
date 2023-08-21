//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    
private:
    int helper(int i, int j, int n, int m, vector<vector<int>>& matrix)
    {
        vector<int> dx = {-1, -1, -1, 0, +1, +1, +1, 0};
        vector<int> dy = {-1, 0, +1, +1, +1, 0, -1, -1};
        
        int ans = 0;
        
        for(int k = 0; k < 8; ++k)
        {
            int newX = dx[k] + i;
            int newY = dy[k] + j;
            
            if(newX >= 0 and newY >= 0 and newX < n and newY < m and !matrix[newX][newY])
            {
                ++ans;
            }
        }
        
        return ans;
    }
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        
        int n = matrix.size(), m = matrix[0].size();
        
        int res = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                
                if(matrix[i][j] == 1)
                {
                    int cnt = helper(i, j, n, m, matrix);
                    
                    if(cnt > 0 and cnt % 2 == 0)
                        ++res;
                }
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends