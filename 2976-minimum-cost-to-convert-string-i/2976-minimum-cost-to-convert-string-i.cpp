using ll = long long;

class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        
        vector<vector<ll>> mat(26, vector<ll>(26, INT_MAX));
        
        for(int i = 0; i < original.size(); ++i)
        {
            int a = original[i] - 'a';
            int b = changed[i] - 'a';
            mat[a][b] = min(mat[a][b], (ll)cost[i]);
        }
        
        for(int k = 0; k < 26; ++k)
        {
            for(int i = 0; i < 26; ++i)
            {
                for(int j = 0; j < 26; ++j)
                {
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }
        
        ll ans = 0;
        
        for(int i = 0; i < source.size(); ++i)
        {
            if(source[i] != target[i])
            {
                ll val = mat[source[i]-'a'][target[i]-'a'];
                if(val >= INT_MAX) return -1;
                ans += val;
            }
        }
        
        return ans;
    }
};