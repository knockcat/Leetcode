class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> v(n+1, 1);
        
        int i2 = 1, i3 = 1, i5 = 1;
        
        for(int i = 2; i <= n; ++i)
        {
            int ithUgly = min({v[i2] * 2, v[i3] * 3, v[i5] * 5});
            
            v[i] = ithUgly;
            
            if(v[i] == v[i2] * 2) ++i2;
            if(v[i] == v[i3] * 3) ++i3;
            if(v[i] == v[i5] * 5) ++i5;
        }
        
        return v[n];
        
    }
};