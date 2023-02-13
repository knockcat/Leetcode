class Solution {
public:
    int countOdds(int low, int high) {
        
        int ans = 0;
        bool one = false, two = false;
        
        if(low & 1)
            ++ans, one = true;
        if(high & 1)
            ++ans, two = true;
          ans += (high-low)/2;
        
        if(one and two)
            ans -= 1;
   
        return ans;
        
    }
};