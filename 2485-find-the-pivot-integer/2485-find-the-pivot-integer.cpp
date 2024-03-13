class Solution {
public:
    int pivotInteger(int n) {
        
        int tot = (n*(n+1))/2;
        
        for(int i = 1; i <= n; ++i)
        {
            int left = (i*(i+1))/2;
            int right = tot - left + i;
            
            if(left == right)
                return i;
        }
        
        return -1;
    }
};