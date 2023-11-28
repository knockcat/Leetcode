class Solution {
public:
    
    const int mod = 1e9+7;
    
    int numberOfWays(string corridor) {
        
        int n = corridor.size();
        
        int cnt = count(corridor.begin(), corridor.end(), 'S');
        
        if(!cnt or cnt & 1) return 0;
        
        int inc = 0;
        
        vector<int> v;
        
        int currCnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
           if(!cnt) break;
            
           if(corridor[i] == 'S')
               ++currCnt, --cnt;
           if(currCnt == 3)
           {
               v.push_back(inc);
               inc = 0;
               currCnt = 1;
           }
           if(currCnt == 2)
              (inc = !inc ? 1 : inc+1);
        }
        
        if(currCnt)
        {
            v.push_back(inc);
        }
        
        long long ans = v[0];
    
        for(int i = 1; i < v.size(); ++i)
            ans = (ans *1LL* v[i]) % mod;
        
        return ans;
    }
};