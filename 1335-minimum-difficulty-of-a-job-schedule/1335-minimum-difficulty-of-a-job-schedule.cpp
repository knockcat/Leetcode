class Solution {
public:
    int t[301][11];
    int solve(vector<int>& mat, int n, int idx, int d) {
        if(d == 1)
            return *max_element(begin(mat)+idx, end(mat));
        
        if(t[idx][d] != -1)
            return t[idx][d];
    
        
        int Max = INT_MIN;
        int result = INT_MAX;
        
        for(int i = idx; i<=n-d; i++) {
            Max = max(Max, mat[i]);
            result = min(result, Max + solve(mat, n, i+1, d-1));
        }
        return t[idx][d] = result;
    }
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n < d)
            return -1;
        memset(t, -1, sizeof(t));
        return solve(jobDifficulty, n, 0, d);
    }
};